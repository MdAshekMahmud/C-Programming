//Write a C program to calculate the sum of all odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("The sum of all odd numbers from 1 to %d= %d\n",n,sum);
}

