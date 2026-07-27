/* If cost price and selling price of an item is input through
the keyboard,write a program to determine whether the seller has made profit or loss
*/
#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost price :");
    scanf("%d", &cp);

    printf("Enter selling price :");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("Profit");
    }
    else if (sp == cp)
    {
        printf("No profit no loss");
    }
    else
        printf("Loss");

    return 0;
}