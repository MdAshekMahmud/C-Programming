// Students information with array of structure
#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int roll;
    int marks;
} student;
int main()
{
    student arr[3]; // arr[0], arr[1], arr[2]
    strcpy(arr[0].name, "Alice");
    arr[0].roll = 1;
    arr[0].marks = 100;

    strcpy(arr[1].name, "Bob");
    arr[1].roll = 2;
    arr[1].marks = 90;

    strcpy(arr[2].name, "Charlie");
    arr[2].roll = 3;
    arr[2].marks = 80;

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name : %s\n", arr[i].name);
        printf("Roll : %d\n", arr[i].roll);
        printf("Marks : %d\n", arr[i].marks);
        printf("\n");
    }
    return 0;
}