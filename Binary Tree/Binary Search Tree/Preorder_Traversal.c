#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *insertNode(struct node *root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data >= root->data) {
        root->right = insertNode(root->right, data);
    } else {
        root->left = insertNode(root->left, data);
    }
    return root;
}

void preorderTraversal(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

int main() {
    struct node *root = NULL;
    int data, choice;
    do {
        printf("Enter the data : ");
        scanf("%d", &data);
        root = insertNode(root, data);
        printf("Continue?.");
        scanf("%d", &choice);
    } while (choice);
    printf("Preorder traversal of the binary tree: ");
    preorderTraversal(root);
    printf("\n");
}