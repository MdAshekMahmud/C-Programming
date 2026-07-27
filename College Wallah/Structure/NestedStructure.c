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

typedef struct LegendaryPokemon
{
    Pokemon Normal;
    char ability[100];
} LegendaryPokemon;

typedef struct MasterPokemon
{
    LegendaryPokemon Legend;
    int specialattack;
} MasterPokemon;

int main()
{
    LegendaryPokemon Mewto;
    strcpy(Mewto.ability, "Pressure");
    Mewto.Normal.hp = 150;
    Mewto.Normal.speed = 180;
    Mewto.Normal.attack = 170;
    Mewto.Normal.tier = 'S';
    strcpy(Mewto.Normal.name, "Mewto");

    printf("%d\n", Mewto.Normal.hp);

    MasterPokemon Arceus;
    Arceus.specialattack = 300;
    strcpy(Arceus.Legend.ability, "Turn anyone to stone");
    Arceus.Legend.Normal.attack = 1500;

    printf("%d", Arceus.Legend.Normal.attack);
    ;
    return 0;
}