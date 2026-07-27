// Take 3 numbers input and tell if they can be the sides of a triangle
#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the first side :");
    scanf("%d", &i);
    printf("Enter the second side :");
    scanf("%d", &j);
    printf("Enter the third side :");
    scanf("%d", &k);
    if ((i + j) > k && (j + k) > i && (k + i) > j)
    {
        printf("Valid triangle");
    }
    else
        printf("Invalid triangle");
    return 0;
}
