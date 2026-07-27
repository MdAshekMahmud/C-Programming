#include <stdio.h>
int main()
{
  int n, i;
  printf("Enter a number :");
  scanf("%d", &n);
  for (i = 1; i < n; i = i + 2)
  {
    printf("%d Hello World\n", i);
  }
  printf("After itration : %d", i);
  return 0;
}