#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Structure for the MinHeap
typedef struct
{
    int *array;   // Array to store heap elements
    int capacity; // Maximum capacity of the heap
    int size;     // Current number of elements in the heap
} MinHeap;

// Function to create a new MinHeap
MinHeap *createMinHeap(int capacity)
{
    MinHeap *heap = (MinHeap *)malloc(sizeof(MinHeap));
    if (!heap)
        return NULL;

    heap->capacity = capacity;
    heap->size = 0;
    heap->array = (int *)malloc(capacity * sizeof(int));
    if (!heap->array)
    {
        free(heap);
        return NULL;
    }

    return heap;
}

// Function to get the parent index
int parent(int i)
{
    return (i - 1) / 2;
}

// Function to get the left child index
int leftChild(int i)
{
    return (2 * i + 1);
}

// Function to get the right child index
int rightChild(int i)
{
    return (2 * i + 2);
}

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify a subtree with the root at given index
void minHeapify(MinHeap *heap, int i)
{
    int left = leftChild(i);
    int right = rightChild(i);
    int smallest = i;

    if (left < heap->size && heap->array[left] < heap->array[smallest])
        smallest = left;

    if (right < heap->size && heap->array[right] < heap->array[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(&heap->array[i], &heap->array[smallest]);
        minHeapify(heap, smallest);
    }
}

// Function to insert a new key
void insert(MinHeap *heap, int key)
{
    if (heap->size == heap->capacity)
    {
        printf("Heap overflow\n");
        return;
    }

    // Insert the new key at the end
    int i = heap->size;
    heap->array[i] = key;
    heap->size++;

    // Fix the min heap property if it is violated
    while (i != 0 && heap->array[parent(i)] > heap->array[i])
    {
        swap(&heap->array[i], &heap->array[parent(i)]);
        i = parent(i);
    }
}

// Function to extract the minimum element
int extractMin(MinHeap *heap)
{
    if (heap->size <= 0)
        return INT_MAX;

    if (heap->size == 1)
    {
        heap->size--;
        return heap->array[0];
    }

    // Store the minimum value and remove it from heap
    int root = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;

    // Maintain the heap property
    minHeapify(heap, 0);

    return root;
}

// Function to decrease key value
void decreaseKey(MinHeap *heap, int i, int new_val)
{
    heap->array[i] = new_val;

    while (i != 0 && heap->array[parent(i)] > heap->array[i])
    {
        swap(&heap->array[i], &heap->array[parent(i)]);
        i = parent(i);
    }
}

// Function to delete a key at given index
void deleteKey(MinHeap *heap, int i)
{
    decreaseKey(heap, i, INT_MIN);
    extractMin(heap);
}

// Function to get the minimum element
int getMin(MinHeap *heap)
{
    if (heap->size <= 0)
        return INT_MAX;
    return heap->array[0];
}

// Function to free the heap
void freeHeap(MinHeap *heap)
{
    if (heap)
    {
        if (heap->array)
            free(heap->array);
        free(heap);
    }
}

// Main function to demonstrate the MinHeap
int main()
{
    // Create a min heap of capacity 10
    MinHeap *heap = createMinHeap(10);

    insert(heap, 3);
    insert(heap, 2);
    insert(heap, 15);
    insert(heap, 5);
    insert(heap, 4);
    insert(heap, 45);

    printf("Min element: %d\n", getMin(heap));

    printf("Extracting elements: ");
    while (heap->size > 0)
    {
        printf("%d ", extractMin(heap));
    }
    printf("\n");

    freeHeap(heap);
    return 0;
}