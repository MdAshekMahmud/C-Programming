#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int id;
    char name[20];
    float cgpa;
    char address[20];
} Student;

int main()
{
    Student S[4] = {{122, "Liam", 3.55, "Dhaka"},
                    {123, "Axel", 3.65, "Tangail"},
                    {124, "Amir", 3.75, "Gazipur"},
                    {125, "Milo", 3.99, "Savar"}};

    printf("ID   Name  CGpa  Address\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  %s  %.2f  %s\n", S[i].id, S[i].name, S[i].cgpa, S[i].address);
    }
    return 0;
}