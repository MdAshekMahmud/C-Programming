// Program to find 2nd largest

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *newNode = NULL;

int main()
{
    int n;
    printf("Enter the numbers of node : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newNode = malloc(sizeof(struct node));

        printf("Enter data for node [%d] : ", i + 1);
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

    int min = INT_MAX;
    int min2 = INT_MAX;

    temp = head;

    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->link;
    }
    temp = head;

    while (temp != NULL)
    {
        if (temp->data < min2 && temp->data != min)
        {
            min2 = temp->data;
        }
        temp = temp->link;
    }

    printf("Second Smallest Element = %d\n", min2);

    return 0;
}