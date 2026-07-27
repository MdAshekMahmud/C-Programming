// Lecture 7,8
#include <stdio.h>
#include <string.h>
struct Person
{
    char name[20];
    int age;
    float salary;
};
void display(struct Person p)
{
    printf("\nName :%s\n", p.name);
    printf("Age :%d\n", p.age);
    printf("Salary :%f\n", p.salary);
}
int main()
{
    struct Person person1;
    strcpy(person1.name, "Md Ashek Mahmud");
    person1.age = 123;
    person1.salary = 123456.34;

    display(person1);

    struct Person person2;
    strcpy(person2.name, "Anisul Islam  ");
    person2.age = 333;
    person2.salary = 12345126.34;

    display(person2);

    return 0;
}