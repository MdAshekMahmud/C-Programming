// A record contains name of cricketer, his age, number of test matches
// that he has played and the average runs that he has scored in each test match.
// Create an array of structure to hold records of 20 such cricketers and them write a program to read these records.
#include <stdio.h>
#include <string.h>
// typedef struct cricketer
struct cricketer
{
    char First_Name[20];
    char Last_Name[20];
    int age;
    int testMatches;
    float averageRuns;
} cricketer;

int main()
{
    struct cricketer arr[20]; // arr[0], arr[1], arr[2]
    for (int i = 0; i < 20; i++)
    {
        printf("Enter Cricketer %d\n", i + 1);
        printf("Enter First Name : ");
        scanf("%s", arr[i].First_Name); // Can not input space separated string
        printf("Enter Last Name : ");
        scanf("%s", arr[i].Last_Name); // Can not input space separated string
        printf("Enter Age : ");
        scanf("%d", &arr[i].age);
        printf("Enter Test Matches : ");
        scanf("%d", &arr[i].testMatches);
        printf("Enter Average Runs : ");
        scanf("%f", &arr[i].averageRuns);
        printf("\n");
    }

    for (int i = 0; i < 20; i++)
    {
        printf("Cricketer %d\n", i + 1);

        printf("Age : %d\n", arr[i].age);
        printf("Test Matches : %d\n", arr[i].testMatches);
        printf("Average Runs : %.2f\n", arr[i].averageRuns);
        printf("\n");
    }
    return 0;
}