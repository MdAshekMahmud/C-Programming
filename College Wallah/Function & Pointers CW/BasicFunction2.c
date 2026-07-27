// 2
#include <stdio.h>

void England()
{
    printf("You are in England\n"); // 6
    return;                         // 7
}
void Australia()
{
    printf("You are in Australia\n"); // 4
    England();                        // 5
    return;                           // 8
}
void India()
{
    printf("You are in India\n"); // 2
    Australia();                  // 3
    return;                       // 9
}
int main()
{
    India(); // 1
    return 0;