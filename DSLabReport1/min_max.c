// Program to find min & max

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
    printf("Enter the number of node : ");
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

    int max = INT_MIN;
    int min = INT_MAX;

    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->link;
    }

    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    return 0;
}