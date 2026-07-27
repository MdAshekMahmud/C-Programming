#include <stdio.h>
#include <string.h>

typedef struct Pokemon
{
    int hp;
} Pokemon;

int main()
{
    Pokemon Pikachu;
    Pikachu.hp = 60;
    printf("%d\n", Pikachu.hp);

    Pokemon *x = &Pikachu;
    (*x).hp = 70; // pikachu.hp=70 (changed), here '()' must
    printf("%d", Pikachu.hp);
}