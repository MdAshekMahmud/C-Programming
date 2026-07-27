#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *insertNode(struct node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data >= root->data)
    {
        root->right = insertNode(root->right, data);
    }
    else
    {
        root->left = insertNode(root->left, data);
    }
    return root;
}

void preorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void postorderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

struct node *deleteNode(struct node *root, int value)
{
    if (root == NULL)
    {
        return root;
    }
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else if (root->left == NULL)
    {
        struct node *temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL)
    {
        struct node *temp = root->left;
        free(root);
        return temp;
    }
}

int main()
{
    struct node *root = NULL;

    root = insertNode(root, 40);
    root = insertNode(root, 20);
    root = insertNode(root, 60);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 50);
    root = insertNode(root, 70);

    printf("Preorder traversal of the binary tree: ");
    preorderTraversal(root);

    printf("\nInorder traversal of the binary tree: ");
    inorderTraversal(root);

    printf("\nPostorder traversal of the binary tree: ");
    postorderTraversal(root);

    printf("\nPreorder traversal after deleting: ");
    root = deleteNode(root, 10);
    preorderTraversal(root);

    return 0;
}