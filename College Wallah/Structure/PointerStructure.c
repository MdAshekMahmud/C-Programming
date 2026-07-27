#include <stdio.h>
#include <string.h>

typedef struct Pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} Pokemon;

int main()
{
    Pokemon Pikachu;
    Pikachu.hp = 60;
    Pikachu.attack = 70;
    Pikachu.speed = 60;
    Pikachu.tier = 'A';
    strcpy(Pikachu.name, "Pikachu");

    // int *x -> address of integer
    // Pokemon *x -> address of structure
    Pokemon *x = &Pikachu;
    printf("%p\n", &Pikachu.hp);
    printf("%p\n", &Pikachu.attack);
    printf("%p\n", &Pikachu.speed);
    printf("%p\n", &Pikachu.tier);
    printf("%p\n", &Pikachu.name);
    printf("%p", x);
}