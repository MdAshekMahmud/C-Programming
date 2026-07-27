// Lecture 5
#include <stdio.h>
struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person1 = {27, 25550.25};
    struct Person person2, person3;

    // element wise assigning
    person2.age = 25;
    person2.salary = 27750.50;

    // structure variable assigning
    person3 = person2;

    if (person1.age == person2.age && person1.salary == person2.salary)
        printf("person1 equal to person2");
    else
        printf("person1 not equal to person2");
}