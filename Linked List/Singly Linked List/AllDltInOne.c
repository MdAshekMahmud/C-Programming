#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *CreateNode(struct node *head, int data)
{
    struct node *temp = NULL, *newnode = NULL;
    head = NULL;
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

struct node *DeleteBeginning(struct node *head)
{
    if (head == NULL) // Check if list is empty
    {
        printf("List is already empty!\n");
        return NULL;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deletelastnode(struct node *head)
{
    struct node *temp, *temp2;
    temp = head;
    temp2 = NULL;
    while (temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    free(temp);
    return head;
}
struct node *deleteatindex(struct node *head, int data)
{
    struct node *prev = head;
    struct node *nxt = head->next;
    for (int i = 1; i < data - 1; i++)
    {
        prev = prev->next;
        nxt = nxt->next;
    }
    prev->next = nxt->next;
    free(nxt);
    return head;
}
struct node *deleteWithGivenValue(struct node *head, int value)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return NULL;
    }

    struct node *p = head;
    struct node *q = head->next;

    // If the node to be deleted is the head node
    if (head->data == value)
    {
        head = head->next;
        free(p);
        return head;
    }

    while (q != NULL && q->data != value)
    {
        p = p->next;
        q = q->next;
    }

    if (q == NULL)
    {
        printf("Value not found in the list!\n");
        return head;
    }

    p->next = q->next;
    free(q);

    return head;
}

int main()
{
    struct node *head = NULL;

    int n;
    printf("Number of nodes : ");
    scanf("%d", &n);
    head = CreateNode(head, n);
    linkedListTraversal(head);

    head = DeleteBeginning(head);
    printf("Linked list after deleting from beginning \n");
    linkedListTraversal(head);

    head = deletelastnode(head);
    printf("Linked list after deleting from end \n");
    linkedListTraversal(head);

    int position;
    printf("Enter the position you want to delete : ");
    scanf("%d", &position);
    head = deleteatindex(head, position);
    linkedListTraversal(head);

    int value;
    printf("Given value ");
    scanf("%d", &value);
    head = deleteWithGivenValue(head, value);
    linkedListTraversal(head);

    return 0;
}