// Create a structure variable by assigning the first date to it. Compare the first and third dates.
#include <stdio.h>
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
    d1.day = 12;
    d1.month = 05;
    d1.year = 2004;

    d2 = d1;

    bool flag = true;
    if (d1.day != d2.day)
        flag = false;
    if (d1.month != d2.month)
        flag = false;
    if (d1.year != d2.year)
        flag = false;

    if (flag == true)
        printf("The dates are same.");
    else
        printf("The dates are not same.");
    return 0;
}