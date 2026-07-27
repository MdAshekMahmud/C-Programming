#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Structure to represent a max heap
typedef struct
{
    int *array;   // Array to store heap elements
    int capacity; // Maximum capacity of the heap
    int size;     // Current number of elements in heap
} MaxHeap;

// Function to create a new max heap
MaxHeap *createMaxHeap(int capacity)
{
    MaxHeap *heap = (MaxHeap *)malloc(sizeof(MaxHeap));
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

// Function to swap two integers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to get the parent index
int parent(int i) { return (i - 1) / 2; }

// Function to get the left child index
int leftChild(int i) { return (2 * i + 1); }

// Function to get the right child index
int rightChild(int i) { return (2 * i + 2); }

// Function to get the maximum element (root)
int getMax(MaxHeap *heap)
{
    if (heap->size <= 0)
    {
        printf("Heap is empty\n");
        return INT_MIN;
    }
    return heap->array[0];
}

// Function to heapify at given index
void heapify(MaxHeap *heap, int i)
{
    int left = leftChild(i);
    int right = rightChild(i);
    int largest = i;

    // If left child is larger than root
    if (left < heap->size && heap->array[left] > heap->array[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < heap->size && heap->array[right] > heap->array[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        swap(&heap->array[i], &heap->array[largest]);
        heapify(heap, largest);
    }
}

// Function to insert a new key
void insert(MaxHeap *heap, int key)
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

    // Fix the max heap property if it is violated
    while (i != 0 && heap->array[parent(i)] < heap->array[i])
    {
        swap(&heap->array[i], &heap->array[parent(i)]);
        i = parent(i);
    }
}

// Function to extract the maximum element (root) from max heap
int extractMax(MaxHeap *heap)
{
    if (heap->size <= 0)
    {
        printf("Heap is empty\n");
        return INT_MIN;
    }

    if (heap->size == 1)
    {
        heap->size--;
        return heap->array[0];
    }

    // Store the maximum value, and remove it from heap
    int root = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;

    // Restore the heap property
    heapify(heap, 0);

    return root;
}

// Function to delete a key at index i
void deleteKey(MaxHeap *heap, int i)
{
    if (i >= heap->size)
    {
        printf("Invalid index\n");
        return;
    }

    // Increase the key value to infinity and then extract it
    heap->array[i] = INT_MAX;

    // Move this key to root and extract it
    while (i != 0 && heap->array[parent(i)] < heap->array[i])
    {
        swap(&heap->array[i], &heap->array[parent(i)]);
        i = parent(i);
    }

    extractMax(heap);
}

// Function to increase value of key at index i to new_val
void increaseKey(MaxHeap *heap, int i, int new_val)
{
    if (i >= heap->size)
    {
        printf("Invalid index\n");
        return;
    }

    if (heap->array[i] >= new_val)
    {
        printf("New value is not greater than current value\n");
        return;
    }

    heap->array[i] = new_val;
    while (i != 0 && heap->array[parent(i)] < heap->array[i])
    {
        swap(&heap->array[i], &heap->array[parent(i)]);
        i = parent(i);
    }
}

// Function to print the heap
void printHeap(MaxHeap *heap)
{
    printf("Max Heap: ");
    for (int i = 0; i < heap->size; i++)
    {
        printf("%d ", heap->array[i]);
    }
    printf("\n");
}

// Function to free memory
void destroyHeap(MaxHeap *heap)
{
    free(heap->array);
    free(heap);
}

// Testing the max heap functionality
int main()
{
    MaxHeap *heap = createMaxHeap(10);

    insert(heap, 3);
    insert(heap, 10);
    insert(heap, 12);
    insert(heap, 8);
    insert(heap, 2);
    insert(heap, 14);

    printHeap(heap);

    printf("Max element: %d\n", getMax(heap));

    printf("Extracted max: %d\n", extractMax(heap));
    printHeap(heap);

    increaseKey(heap, 2, 15);
    printHeap(heap);

    deleteKey(heap, 1);
    printHeap(heap);

    destroyHeap(heap);

    return 0;
}