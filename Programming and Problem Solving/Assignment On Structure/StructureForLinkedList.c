#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int countNodes(struct Node *head)
{
    int count = 0;
    struct Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *current = NULL;
    int data;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter data for Node %d: ", i);
        scanf("%d", &data);

        temp = createNode(data);

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            current->next = temp;
        }
        current = temp;
    }
    printf("\nThe linked list contains:\n");
    current = head;
    while (current != NULL)
    {
        printf("%d", current->data);
        if (current->next != NULL)
        {
            printf(" -> ");
        }
        current = current->next;
    }
    printf("\n");
    int totalNodes = countNodes(head);
    printf("Total number of nodes: %d\n", totalNodes);
    current = head;
    struct Node *nextNode;
    while (current != NULL)
    {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    return 0;
}
