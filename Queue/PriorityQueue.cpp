#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
private:
    vector<int> heap; // Using vector as dynamic array

    // Helper functions for navigating the heap
    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    // Helper function to maintain heap property
    void heapifyUp(int i)
    {
        while (i > 0 && heap[parent(i)] < heap[i])
        {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    void heapifyDown(int i)
    {
        int maxIndex = i;
        int left = leftChild(i);

        if (left < heap.size() && heap[left] > heap[maxIndex])
        {
            maxIndex = left;
        }

        int right = rightChild(i);
        if (right < heap.size() && heap[right] > heap[maxIndex])
        {
            maxIndex = right;
        }

        if (i != maxIndex)
        {
            swap(heap[i], heap[maxIndex]);
            heapifyDown(maxIndex);
        }
    }

public:
    PriorityQueue() {}

    void push(int val)
    {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    int top()
    {
        if (heap.empty())
        {
            throw runtime_error("Priority queue is empty");
        }
        return heap[0];
    }

    void pop()
    {
        if (heap.empty())
        {
            throw runtime_error("Priority queue is empty");
        }

        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty())
        {
            heapifyDown(0);
        }
    }

    bool empty()
    {
        return heap.empty();
    }

    int size()
    {
        return heap.size();
    }
};

int main()
{
    PriorityQueue pq;

    // Example usage
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);

    cout << "Priority Queue contents: ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}