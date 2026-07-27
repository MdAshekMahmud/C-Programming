#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int studentID;
    float GPA;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int studentID, float GPA) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->studentID = studentID;
    newNode->GPA = GPA;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insert(Node *root, int studentID, float GPA) {
    if (root == NULL)
        return createNode(studentID, GPA);

    if (studentID < root->studentID)
        root->left = insert(root->left, studentID, GPA);
    else if (studentID > root->studentID)
        root->right = insert(root->right, studentID, GPA);
    else
        root->GPA = GPA; // Update GPA if studentID already exists

    return root;
}

void preorderTraversal(Node *root) {
    if (root != NULL) {
        printf("%d %.2f\n", root->studentID, root->GPA);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

int main() {
    Node *root = NULL;

    root = insert(root, 101, 3.5);
    root = insert(root, 102, 3.54);
    root = insert(root, 103, 3.25);
    root = insert(root, 104, 3.9);
    preorderTraversal(root);

    return 0;
}