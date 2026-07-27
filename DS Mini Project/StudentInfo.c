#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a student
struct Student
{
    int id;
    char name[50];
    float cgpa;
    char address[100];
    struct Student *next; // Pointer to the next student in the list
};

// Function to create a new student node
struct Student *createStudent(int id, char name[], float cgpa, char address[])
{
    struct Student *newStudent = (struct Student *)malloc(sizeof(struct Student));
    newStudent->id = id;
    strcpy(newStudent->name, name);
    newStudent->cgpa = cgpa;
    strcpy(newStudent->address, address);
    newStudent->next = NULL;
    return newStudent;
}

// Function to insert a new student at the end of the linked list
void insertStudent(struct Student **head, int id, char name[], float cgpa, char address[])
{
    struct Student *newStudent = createStudent(id, name, cgpa, address);
    if (*head == NULL)
    {
        *head = newStudent;
    }
    else
    {
        struct Student *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
}

// Function to display the linked list
void displayStudents(struct Student *head)
{
    if (head == NULL)
    {
        printf("No students in the list.\n");
        return;
    }
    struct Student *temp = head;
    while (temp != NULL)
    {
        printf("ID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("CGPA: %.2f\n", temp->cgpa);
        printf("Address: %s\n\n", temp->address);
        temp = temp->next;
    }
}

int main()
{
    struct Student *head = NULL;

    // Inserting students into the linked list
    insertStudent(&head, 101, "Alice", 3.75, "123 Street A");
    insertStudent(&head, 102, "Bob", 3.85, "456 Street B");
    insertStudent(&head, 103, "Charlie", 3.65, "789 Street C");

    // Displaying the students
    printf("Student Information:\n");
    displayStudents(head);

    return 0;
}
