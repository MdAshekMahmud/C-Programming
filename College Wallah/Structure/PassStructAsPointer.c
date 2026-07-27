/*Create a structure 'person' having attributes as age and weight.
Access it's structure variables using pointers.*/
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

void change(Pokemon *P)
{
    // P->hp = 70; // (*x).something = x->something
    (*P).hp = 70;
    (*P).speed = 80;
    (*P).attack = 90;
    (*P).tier = 'S';
    // strcpy(P->name, "Raichu"); -> also work
    strcpy((*P).name, "Raichu");
    return;
}

int main()
{
    Pokemon Pikachu = {60, 100, 70, 'A', "Pikachu"};
    // Pikachu.hp = 60;
    // Pikachu.speed = 100;
    // Pikachu.attack = 70;
    // Pikachu.tier = 'A';
    // strcpy(Pikachu.name, "Pikachu");

    printf("%d\n", Pikachu.hp);
    printf("%d\n", Pikachu.speed);
    printf("%d\n", Pikachu.attack);
    printf("%c\n", Pikachu.tier);
    printf("%s\n", Pikachu.name);

    change(&Pikachu);

    printf("%d\n", Pikachu.hp);
    printf("%d\n", Pikachu.speed);
    printf("%d\n", Pikachu.attack);
    printf("%c\n", Pikachu.tier);
    printf("%s\n", Pikachu.name);

    return 0;
}