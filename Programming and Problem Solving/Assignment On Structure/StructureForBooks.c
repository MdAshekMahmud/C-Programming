#include <stdio.h>
#include <string.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book Books[3];
    int i, maxIndex = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the details for Book %d : \n", i + 1);
        printf("Title : ");
        scanf(" %[^\n]", Books[i].title);
        printf("Author : ");
        scanf(" %[^\n]", Books[i].author);
        printf("Price : ");
        scanf("%f", &Books[i].price);
    }

    for (i = 1; i < 3; i++)
    {
        if (Books[i].price > Books[maxIndex].price)
        {
            maxIndex = i;
        }
    }
    printf("\nthe most expensive book is : \n");
    printf("Title : %s\n", Books[maxIndex].title);
    printf("Author : %s\n", Books[maxIndex].author);
    printf("Price : %.2f\n", Books[maxIndex].price);
    return 0;
}