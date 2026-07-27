//Write a C Program to copy all elements from one array to another array
#include<stdio.h>
int main()
{
 int n,i;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 int arr[n],arr2[n];
 printf("Enter the elements of the first array:\n");
 for(i=0;i<n;i++)
 {
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
     arr2[i]=arr[i];
 }
 printf("Elements of the second array :\n");
 for(i=0;i<n;i++)
 {
     printf("%d",arr2[i]);
 }
 return 0;
}
