// Create a structure type 'Person' with name, age, and salary as its attributes.
// Declare and initialize two variables of type 'Person' named person1 and person2.
// The program should not take any input from the user.
#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
    float salary;
} person1, person2;

int main()
{
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.salary = 50000.0;

    printf("Name of person1: %s\n", person1.name);
    printf("Age of person1: %d\n", person1.age);
    printf("Salary of person1: %.2f\n\n", person1.salary);

    strcpy(person2.name, "Jane Doe");
    person2.age = 22;
    person2.salary = 45000.0;

    printf("Name of person2: %s\n", person2.name);
    printf("Age of person2: %d\n", person2.age);
    printf("Salary of person2: %.2f\n", person2.salary);

    return 0;
}