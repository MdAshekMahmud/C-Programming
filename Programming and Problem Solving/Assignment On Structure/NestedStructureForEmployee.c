#include <stdio.h>
#include <string.h>

struct Address
{
    char houseNo[10];
    char street[20];
    char city[20];
};

struct Employee
{
    char name[30];
    int age;
    struct Address address;
};

int main()
{
    struct Employee employees[5];
    char searchCity[20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details for Employee %d : \n", i + 1);
        printf("Name : ");
        scanf(" %[^\n]", employees[i].name);
        printf("Age : ");
        scanf(" %d", &employees[i].age);
        printf("House No : ");
        scanf(" %[^\n]", employees[i].address.houseNo);
        printf("Street : ");
        scanf(" %[^\n]", employees[i].address.street);
        printf("City : ");
        scanf(" %[^\n]", employees[i].address.city);
    }

    printf("\nEnter the city to search : ");
    scanf(" %[^\n]", searchCity);

    printf("\nEmployees in %s : \n", searchCity);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(employees[i].address.city, searchCity) == 0)
        {
            printf("Name : %s\n", employees[i].name);
            printf("Age : %d\n", employees[i].age);
            printf("Address : %s, %s, %s\n", employees[i].address.houseNo, employees[i].address.street, employees[i].address.city);
        }
    }

    return 0;
}
