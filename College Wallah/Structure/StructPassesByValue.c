#include <stdio.h>
#include <string.h>

typedef struct Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} Pokemon;

void change(Pokemon P)
{
    P.attack = 300;
    P.hp = 180;
    return;
}

int main()
{

    Pokemon Pikachu;
    Pikachu.attack = 150;
    Pikachu.hp = 120;
    change(Pikachu);
    printf("%d\n", Pikachu.attack); // Output not changed
    printf("%d\n", Pikachu.hp);

    return 0;
}