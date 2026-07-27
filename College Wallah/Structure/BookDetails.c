// Create a structure type 'Book' with name, price, and number of pages as its attributes.
#include <stdio.h>
#include <string.h>
struct Book
{
    char name[50]; // Only individual characters can be inputted
    float price;
    int pages;
} book1, book2;

int main()
{
    // printf("Enter name of book1: ");
    //  scanf("%s", book1.name);
    strcpy(book1.name, "Harry Potter"); // This is a workaround for the scanf issue
    printf("Enter price of book1: ");
    scanf("%f", &book1.price);
    printf("Enter number of pages in book1: ");
    scanf("%d", &book1.pages);

    printf("Name of book1: %s\n", book1.name);
    printf("Price of book1: %.2f\n", book1.price);
    printf("Number of pages in book1: %d\n", book1.pages);

    printf("\nEnter name of book2: ");
    // scanf("%99[^\n]s", book2.name);
    strcpy(book2.name, "The Alchemist"); // This is a workaround for the scanf issue
    printf("Enter price of book2: ");
    scanf("%f", &book2.price);
    printf("Enter number of pages in book2: ");
    scanf("%d", &book2.pages);

    printf("Name of book2: %s\n", book2.name);
    printf("Price of book2: %.2f\n", book2.price);
    printf("Number of pages in book2: %d\n", book2.pages);

    return 0;
}