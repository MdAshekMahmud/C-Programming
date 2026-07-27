#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
struct node *first = NULL;
struct node *second = NULL;
struct node *third = NULL;
struct node *newnode = NULL;
int main()
{
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    newnode = malloc(sizeof(struct node));

    first->data = 7;
    first->prev = NULL;
    first->next = second;
    second->data = 9;
    second->prev = first;
    second->next = third;
    third->data = 11;
    third->prev = second;
    third->next = NULL;

    first->next = newnode;
    newnode->prev = first;
    newnode->data = 111;
    newnode->next = second;
    second->prev = newnode;

    head = first;

    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}