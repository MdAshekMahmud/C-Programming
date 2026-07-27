#include <stdio.h>
#include <string.h>

typedef union Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} Pokemon;

int main()
{
    Pokemon Pikachu = {60, 100, 70, 'A', "Pikachu"};

    printf("%d\n", Pikachu.hp);
    printf("%d\n", Pikachu.speed);
    printf("%d\n", Pikachu.attack);
    printf("%c\n", Pikachu.tier);
    printf("%s\n", Pikachu.name);

    return 0;
}