#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int Stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow.\n");
        return;
    }
    top = top + 1;
    Stack_arr[top] = data;
}

// void print()
// {
//     if (top == -1)
//     {
//         print("Stack Underflow.\n");
//         return;
//     }
//     for (int i = top; i >= 0; i--)
//     {
//         printf("Stack elements : %d\n", Stack_arr[i]);
//     }
// }

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    // print();
}