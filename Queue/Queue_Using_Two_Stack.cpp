#include <bits/stdc++.h>
using namespace std;

#define N 100
int s1[N]; // First stack
int s2[N]; // Second stack
int top1 = -1, top2 = -1;
int itemCount = 0;

bool isFull()
{
    return (itemCount == N);
}

bool isEmpty()
{
    return (itemCount == 0);
}

void Push(int data, int S)
{
    if (S == 1)
    {
        if (top1 == N - 1)
        {
            cout << "Stack 1 is full" << endl;
            return;
        }
        top1++;
        s1[top1] = data;
    }
    else
    {
        if (top2 == N - 1)
        {
            cout << "Stack 2 is full" << endl;
            return;
        }
        top2++;
        s2[top2] = data;
    }
}

int Pop(int S)
{
    if (S == 1)
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is empty" << endl;
            return -1;
        }
        return s1[top1--];
    }
    else
    {
        if (top2 == -1)
        {
            cout << "Stack 2 is empty" << endl;
            return -1;
        }
        return s2[top2--];
    }
}

void Enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue is full" << endl;
        return;
    }
    Push(data, 2);
    itemCount++;
}

int Dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }

    // If stack1 is empty, transfer all elements from stack2 to stack1
    if (top1 == -1)
    {
        while (top2 != -1)
        {
            Push(Pop(2), 1);
        }
    }

    itemCount--;
    return Pop(1);
}

int Front()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }

    // If stack1 is empty, transfer all elements from stack2 to stack1
    if (top1 == -1)
    {
        while (top2 != -1)
        {
            Push(Pop(2), 1);
        }
    }

    return s1[top1];
}

int main()
{
    Enqueue(5);
    Enqueue(4);
    Enqueue(3);

    cout << "Front element: " << Front() << endl;

    cout << "Dequeue: " << Dequeue() << endl;
    cout << "Dequeue: " << Dequeue() << endl;

    Enqueue(7);

    cout << "Front element: " << Front() << endl;
    cout << "Dequeue: " << Dequeue() << endl;
    cout << "Dequeue: " << Dequeue() << endl;

    return 0;
}
