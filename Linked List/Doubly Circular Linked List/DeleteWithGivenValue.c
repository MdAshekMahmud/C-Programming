#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *tail = NULL;

void Create(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        printf("Enter the data for the node : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
    }
}
void Display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    else
    {
        do
        {
            printf("%d->", temp->data);
            temp = temp->next;
        } while (temp != head);
    }
    printf("NULL\n");
}
void DeletewithValue(int n)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is already empty.\n");
        return;
    }
    if (head->next == head && head->data == n)
    {
        free(head);
        head = tail = NULL;
        printf("Node with value %d deleted. List is now empty.\n", n);
        return;
    }
    do
    {
        if (temp->data == n)
        {
            if (temp == head)
            {
                head = head->next;
                head->prev = tail;
                tail->next = head;
            }
            else if (temp == tail)
            {
                tail = tail->prev;
                tail->next = head;
                head->prev = tail;
            }
            else
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }
            free(temp);
            printf("Node with value %d deleted.\n", n);
            return;
        }
        temp = temp->next;
    } while (temp != head);
    printf("Node with value %d not found.\n", n);
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    Create(n);
    Display();
    int toDelete;
    printf("Enter the value to delete : ");
    scanf("%d", &toDelete);
    DeletewithValue(toDelete);
    Display();

    return 0;
}

// while (temp->next != head || temp == head)
//     {
//         if (temp->data == n)
//         {
//             if (temp == head)
//             {
//                 head = head->next;
//                 head->prev = tail;
//                 tail->next = head;
//             }
//             else if (temp == tail)
//             {
//                 tail = tail->prev;
//                 tail->next = head;
//                 head->prev = tail;
//             }
//             else
//             {
//                 temp->prev->next = temp->next;
//                 temp->next->prev = temp->prev;
//             }
//             free(temp);
//             printf("Node with value %d deleted.\n", n);
//             return;
//         }
//         temp = temp->next;
//     }