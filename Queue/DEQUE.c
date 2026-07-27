#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct
{
    int array[MAX_SIZE];
    int front;
    int rear;
    int size;
} Deque;

// Initialize the deque
void initDeque(Deque *dq)
{
    dq->front = -1;
    dq->rear = -1;
    dq->size = 0;
}

// Check if the deque is empty
bool isEmpty(Deque *dq)
{
    return dq->size == 0;
}

// Check if the deque is full
bool isFull(Deque *dq)
{
    return dq->size == MAX_SIZE;
}

// Insert at the front of the deque
bool insertFront(Deque *dq, int item)
{
    if (isFull(dq))
        return false;

    if (isEmpty(dq))
    {
        dq->front = 0;
        dq->rear = 0;
    }
    else
    {
        dq->front = (dq->front - 1 + MAX_SIZE) % MAX_SIZE;
    }

    dq->array[dq->front] = item;
    dq->size++;
    return true;
}

// Insert at the rear of the deque
bool insertRear(Deque *dq, int item)
{
    if (isFull(dq))
        return false;

    if (isEmpty(dq))
    {
        dq->front = 0;
        dq->rear = 0;
    }
    else
    {
        dq->rear = (dq->rear + 1) % MAX_SIZE;
    }

    dq->array[dq->rear] = item;
    dq->size++;
    return true;
}

// Delete from the front of the deque
bool deleteFront(Deque *dq, int *item)
{
    if (isEmpty(dq))
        return false;

    *item = dq->array[dq->front];
    dq->size--;

    if (isEmpty(dq))
    {
        dq->front = -1;
        dq->rear = -1;
    }
    else
    {
        dq->front = (dq->front + 1) % MAX_SIZE;
    }

    return true;
}

// Delete from the rear of the deque
bool deleteRear(Deque *dq, int *item)
{
    if (isEmpty(dq))
        return false;

    *item = dq->array[dq->rear];
    dq->size--;

    if (isEmpty(dq))
    {
        dq->front = -1;
        dq->rear = -1;
    }
    else
    {
        dq->rear = (dq->rear - 1 + MAX_SIZE) % MAX_SIZE;
    }

    return true;
}

// Get the front item without deleting
bool getFront(Deque *dq, int *item)
{
    if (isEmpty(dq))
        return false;

    *item = dq->array[dq->front];
    return true;
}

// Get the rear item without deleting
bool getRear(Deque *dq, int *item)
{
    if (isEmpty(dq))
        return false;

    *item = dq->array[dq->rear];
    return true;
}

// Display the deque
void display(Deque *dq)
{
    if (isEmpty(dq))
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");
    int i = dq->front;

    do
    {
        printf("%d ", dq->array[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (dq->rear + 1) % MAX_SIZE);

    printf("\n");
}

// Main function for testing
int main()
{
    Deque dq;
    initDeque(&dq);
    int item;

    insertFront(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    insertRear(&dq, 30);

    display(&dq);

    deleteFront(&dq, &item);
    printf("Deleted from front: %d\n", item);

    deleteRear(&dq, &item);
    printf("Deleted from rear: %d\n", item);

    display(&dq);

    return 0;
}