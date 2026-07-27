#include <stdio.h>
#include <string.h>
typedef struct data
{
    int pcode;
    int punit;
    float price;
} data;

int main()
{
    data a, b;
    scanf("%d %d", &a.pcode, &a.punit);
    scanf("%f", &a.price);

    scanf("%d %d", &b.pcode, &b.punit);
    scanf("%f", &b.price);

    float sum1 = a.punit * a.price;
    float sum2 = b.punit * b.price;

    float total = sum1 + sum2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}