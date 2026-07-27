// Lesture 3
#include <stdio.h>
struct Person
{
    int age;
    float salary;
};

struct Person person1, person2;

int main()
{
    printf("Enter Information for Person 1 : \n");
    printf("Enter Age : ");
    scanf("%d", &person1.age);

    printf("Enter Salary : ");
    scanf("%f", &person1.salary);

    printf("Person1 :\n");
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n", person1.salary);

    printf("Enter Information for Person 2 : \n");
    printf("Enter Age : ");
    scanf("%d", &person2.age);

    printf("Enter Salary : ");
    scanf("%f", &person2.salary);

    printf("Person2 :\n");
    printf("Age = %d\n", person2.age);
    printf("Salary = %.2f\n", person2.salary);
}