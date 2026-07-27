#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student information
struct Student
{
    char id[15]; // Changed to char array to store ID in the format 242-15-854
    char name[50];
    float cgpa;
    char address[100];
    struct Student *next; // Pointer to the next student in the list
};

typedef struct Student Student;

// Function to create a new student node
Student *createStudent(char id[], char name[], float cgpa, char address[])
{
    // Allocate memory for a new student
    Student *newStudent = (Student *)malloc(sizeof(Student));

    // Check if memory allocation was successful
    if (newStudent == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Initialize the student data
    strcpy(newStudent->id, id);
    strcpy(newStudent->name, name);
    newStudent->cgpa = cgpa;
    strcpy(newStudent->address, address);
    newStudent->next = NULL; // Initialize the next pointer to NULL

    return newStudent;
}

// Function to add a student to the linked list
Student *addStudent(Student *head, char id[], char name[], float cgpa, char address[])
{
    // Create a new student node
    Student *newStudent = createStudent(id, name, cgpa, address);

    // If the list is empty, the new student becomes the head
    if (head == NULL)
    {
        head = newStudent;
    }
    else
    {
        // Traverse to the end of the list
        Student *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // Add the new student at the end of the list
        temp->next = newStudent;
    }

    return head;
}

// Function to display the student information
void displayStudents(Student *head)
{
    // Check if the list is empty
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    // Print the student information
    printf("\nStudent Information:\n");
    Student *temp = head;
    while (temp != NULL)
    {
        printf("ID: %s\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("CGPA: %.2f\n", temp->cgpa);
        printf("Address: %s\n", temp->address);
        printf("-----------------------\n");
        temp = temp->next;
    }
}

int main()
{
    Student *head = NULL; // Initialize the head of the linked list to NULL

    int choice;
    char id[15];
    char name[50], address[100];
    float cgpa;

    do
    {
        // Display menu options
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear the newline character from the buffer

        switch (choice)
        {
        case 1:
            // Get student details from the user
            printf("Enter ID: ");
            fgets(id, sizeof(id), stdin);
            id[strcspn(id, "\n")] = 0; // Clear the newline character from the buffer

            printf("Enter Name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = 0; // Remove the newline character

            printf("Enter CGPA: ");
            scanf("%f", &cgpa);
            getchar(); // Clear the newline character from the buffer

            printf("Enter Address: ");
            fgets(address, sizeof(address), stdin);
            address[strcspn(address, "\n")] = 0; // Remove the newline character

            // Add the student to the list
            head = addStudent(head, id, name, cgpa, address);
            break;

        case 2:
            // Display the list of students
            displayStudents(head);
            break;

        case 3:
            // Exit the program
            printf("Exiting...\n");
            break;

        default:
            // Handle invalid choices
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    // Free the allocated memory (optional but good practice)
    Student *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
