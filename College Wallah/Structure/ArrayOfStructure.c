#include <stdio.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
} pokemon;
int main()
{
    pokemon arr[3]; // arr[0], arr[1], arr[2]
    arr[0].attack = 50;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    arr[0].hp = 100;

    arr[1].attack = 70;
    arr[1].speed = 40;
    arr[1].tier = 'B';
    arr[1].hp = 120;

    arr[2].attack = 90;
    arr[2].speed = 50;
    arr[2].tier = 'S';
    arr[2].hp = 150;

    for (int i = 0; i < 3; i++)
    {
        printf("Pokemon %d\n", i + 1);
        printf("HP : %d\n", arr[i].hp);
        printf("Attack : %d\n", arr[i].attack);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %c\n", arr[i].tier);
        printf("\n");
    }

    return 0;
}