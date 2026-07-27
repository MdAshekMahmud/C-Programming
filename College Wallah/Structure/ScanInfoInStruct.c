// User input all without any space separated string.
// Create a structure named pokemon that contains the following members:
#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
} pokemon;

int main()
{
    pokemon arr[3]; // arr[0], arr[1], arr[2]
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Pokemon %d\n", i + 1);
        printf("Enter Name : ");
        scanf("%s", arr[i].name); // Can not input space separated string
        printf("Enter HP : ");
        scanf("%d", &arr[i].hp);
        printf("Enter Attack : ");
        scanf("%d", &arr[i].attack);
        printf("Enter Speed : ");
        scanf("%d", &arr[i].speed);
        printf("Enter Tier : ");
        scanf(" %c", &arr[i].tier);
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Pokemon %d\n", i + 1);
        printf("Name : %s\n", arr[i].name);
        printf("HP : %d\n", arr[i].hp);
        printf("Attack : %d\n", arr[i].attack);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %c\n", arr[i].tier);
        printf("\n");
    }
    return 0;
}