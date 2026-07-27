// Program to find occurence of odd/even numbers

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *newNode = NULL;

int odd = 0;
int even = 0;

int main()
{
    int n;
    printf("Enter the numbers of node : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newNode = malloc(sizeof(struct node));

        printf("Enter data for node [%d]\t: ", i + 1);
        scanf("%d", &newNode->data);
        newNode->link = NULL;

        if (i == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->link = newNode;
            temp = newNode;
        }
    }

    temp = head;

    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        temp = temp->link;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}