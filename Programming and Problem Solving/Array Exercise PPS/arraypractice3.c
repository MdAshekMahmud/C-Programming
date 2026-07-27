#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }

    printf("Total number of negative elements: %d\n",count);
    return 0;
}
