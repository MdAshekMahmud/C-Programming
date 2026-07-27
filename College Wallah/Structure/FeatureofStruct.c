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
    pokemon a, b, c;
    a.attack = 50;
    a.speed = 30;
    a.tier = 'A';
    a.hp = 100;
    strcpy(a.name, "Pikachu");

    // b.attack = a.attack;
    // b.speed = a.speed;
    // b.tier = a.tier;
    // b.hp = a.hp;
    // strcpy(b.name, a.name);

    b = a; // This is the feature of structure in C
    // b = a -> Deep Copy

    printf("%d\n", b.attack);
    printf("%d\n", b.speed);
    printf("%d\n", b.hp);
    printf("%c\n", b.tier);
    return 0;
}