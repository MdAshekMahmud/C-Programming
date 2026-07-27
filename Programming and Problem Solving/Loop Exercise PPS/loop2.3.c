//Write a C program to print the multiplication table of any given number
// Print the table of 'n'. Here 'n' is a integer which user will input
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the nuumber:");
    scanf("%d",&n);
    printf("Multiplication table of %d:\n",n);
    for(i=1;i<=10;i++)
    {
      printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}

