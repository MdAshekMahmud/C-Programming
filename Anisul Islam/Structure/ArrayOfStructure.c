// Lecture 6
#include <stdio.h>
struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Information for Person %d\n", i + 1);
        printf("enter age : ");
        scanf("%d", &person[i].age);
        printf("enter salary : ");
        scanf("%f", &person[i].salary);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\n\nInformation of Person %d\n", i + 1);
        printf("Age : %d\n", person[i].age);
        printf("Salary : %.2f\n", person[i].salary);
    }
}