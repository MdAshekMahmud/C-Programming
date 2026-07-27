#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head = NULL, *tail;
void createCLL(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct Node *newnode = malloc(sizeof(struct Node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            // tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            // tail->next = head;
        }
        tail->next = head;
    }
    printf("%d ", tail->next->data);
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    createCLL(n);
}