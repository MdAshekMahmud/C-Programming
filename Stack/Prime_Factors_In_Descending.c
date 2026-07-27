/*Write a program to print all the prime factors of a number in descending order using a stack. */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
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

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    int value;
    value = Stack_arr[top];
    top = top - 1;
    return value;
}

void print()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", Stack_arr[i]);
    }
    printf("\n");
}

void prime_fact(int num)
{
    // int i = 2;
    // while (num != 1)
    // {
    //     while (num % i == 0)
    //     {
    //         push(i);
    //         num = num / i;
    //     }
    //     i++;
    // }
    // while (top != -1)
    // {
    //     printf("%d ", pop());
    // }

    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            push(i);
            num = num / i;
        }
    }
}

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    prime_fact(number);
    printf("Prime factors of the number in descending order are as follow : ");
    print();
    return 0;
}