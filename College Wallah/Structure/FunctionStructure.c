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

// void fun(struct Pokemon P) -> Also work
void fun(Pokemon P)
{
    printf("%d", P.attack);
    return;
}

int main()
{

    Pokemon Pikachu;
    Pikachu.attack = 150;
    fun(Pikachu);

    return 0;
}