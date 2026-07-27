// Program to find average

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
    printf("Enter the number of Nodes : ");
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

    int sum = 0;
    temp = head;

    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->link;
    }

    printf("Average = %.2f\n", (float)sum / n);

    return 0;
}