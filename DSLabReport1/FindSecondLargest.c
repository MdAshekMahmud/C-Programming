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

    int max = INT_MIN;
    int max2 = INT_MIN;

    temp = head;

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->link;
    }
    temp = head;

    while (temp != NULL)
    {
        if (temp->data > max2 && temp->data != max)
        {
            max2 = temp->data;
        }
        temp = temp->link;
    }

    printf("Second Largest Element = %d\n", max2);

    return 0;
}