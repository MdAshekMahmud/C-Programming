#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create()
{
    int x;
    struct node *newnode = malloc(sizeof(struct node));
    scanf("%d", &x);
    if (x == -1)
        return NULL;
    newnode->data = x;
    printf("Enter left child of (%d) (-1 to return) : ", x);
    newnode->left = create();
    printf("Enter right child of (%d) (-1 to return) : ", x);
    newnode->right = create();
    return newnode;
}
void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
int main()
{
    struct node *root = NULL;
    printf("Enter the data of the root : ");
    root = create();
    inorder(root);

    return 0;
}