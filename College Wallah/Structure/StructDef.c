#include <stdio.h>
#include <string.h>

typedef struct Book
{
    char name[50];
    float price;
    int pages;
} Book;

int main()
{
    Book book1, book2;

    strcpy(book1.name, "Harry Potter");
    book1.price = 500.0;
    book1.pages = 500;

    printf("Name of book1: %s\n", book1.name);
    printf("Price of book1: %.2f\n", book1.price);
    printf("Number of pages in book1: %d\n", book1.pages);

    return 0;
}