/*Create a structure to specify data on structure with these attributes :
Roll Number, Name, Depertment, Course, Year of joining. Create 2 structure
variables. Now, create a function to check if two students have the same
Depertment. Pass the two structure variable as input to this function.*/
#include <stdio.h>
#include <string.h>

typedef struct StudentInfo
{
    int Roll_Number;
    char Name[20];
    char Depertment[40];
    char Course[40];
    int YearOfJoining;
} StudentInfo;
StudentInfo s1, s2;

void check(StudentInfo s1, StudentInfo s2)
{
    int isSame = 1; // Assume they are the same initially
    for (int i = 0; s1.Depertment[i] != '\0' || s2.Depertment[i] != '\0'; i++)
    {
        if (s1.Depertment[i] != s2.Depertment[i])
        {
            isSame = 0; // Found a mismatch
            break;
        }
    }

    if (isSame)
    {
        printf("The departments are the same.\n");
    }
    else
    {
        printf("The departments are different.\n");
    }
}

int main()
{
    strcpy(s1.Depertment, "CSE");
    strcpy(s2.Depertment, "CSE");

    check(s1, s2);
    return 0;
}