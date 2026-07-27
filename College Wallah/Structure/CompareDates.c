// Create a strcture 'date' that contains three members namely date, month, and year.
// Create 2 Structure variables with different dates and compare the two.
// If the dates are equal then display message as "Equal" otherwise "Unequal".

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;
int main()
{
    date d1, d2;
    d1.day = 10;
    d1.month = 2;
    d1.year = 2020;

    d2.day = 12;
    d2.month = 4;
    d2.year = 2020;
    // if(a == b) -> Wrong, Because user defined data type can't be compared
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }

    // bool flag = true;
    // if (d1.day != d2.day)
    //     flag = false;
    // if (d1.month != d2.month)
    //     flag = false;
    // if (d1.year != d2.year)
    //     flag = false;

    // if (flag == true)
    //     printf("The dates are same.");
    // else
    //     printf("The dats are different.");

    return 0;
}