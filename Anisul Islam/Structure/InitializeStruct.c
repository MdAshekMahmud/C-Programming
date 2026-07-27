// Lesture 4
#include <stdio.h>
struct Person // Global Structure
{
    int age;
    float salary;
};

struct Person person1, person2; // Global Variable

int main()
{
    struct Person person1 = {27, 25500.50};
    person2 = person1;

    printf("Person1 :\n");
    printf("Age = %d\n", person1.age);
    printf("Age = %.2f\n", person1.salary);

    printf("Person2 :\n");
    printf("Age = %d\n", person2.age);
    printf("Salary = %.2f\n", person2.salary);
}