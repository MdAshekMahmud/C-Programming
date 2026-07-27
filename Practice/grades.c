#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grade(int student_number);
void disp_grades(int g[][GRADES]);

int main(void)
{
    char choice;
    char input[80];

    while (1)
    {
        printf("\n--- Student Grades Database ---\n");
        printf("(E)nter grades\n");
        printf("(R)eport grades\n");
        printf("(Q)uit\n");
        printf("Enter your choice: ");
        if (fgets(input, sizeof(input), stdin) == NULL)
            continue; // Read user input
        choice = toupper(input[0]);

        switch (choice)
        {
        case 'E':
            enter_grades();
            break;
        case 'R':
            disp_grades(grade);
            break;
        case 'Q':
            printf("Exiting program. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

/* Enter the student's grades. */
void enter_grades(void)
{
    for (int class_index = 0; class_index < CLASSES; class_index++)
    {
        printf("\nEntering grades for Class #%d:\n", class_index + 1);
        for (int student_index = 0; student_index < GRADES; ++student_index)
        {
            grade[class_index][student_index] = get_grade(student_index + 1);
        }
    }
}

/* Read a grade with validation. */
int get_grade(int student_number)
{
    char input[80];
    int grade;

    while (1)
    {
        printf("Enter grade for Student #%d: ", student_number);
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        // Convert input to an integer and validate
        grade = atoi(input);
        if (grade >= 0 && grade <= 100)
        { // Assuming grades range from 0 to 100
            return grade;
        }
        else
        {
            printf("Grade must be between 0 and 100. Please try again.\n");
        }
    }
}

/* Display all grades. */
void disp_grades(int g[][GRADES])
{
    for (int class_index = 0; class_index < CLASSES; ++class_index)
    {
        printf("\nGrades for Class #%d:\n", class_index + 1);
        for (int student_index = 0; student_index < GRADES; ++student_index)
        {
            printf("Student #%d: %d\n", student_index + 1, g[class_index][student_index]);
        }
    }
}
