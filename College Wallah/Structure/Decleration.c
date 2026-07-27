#include <stdio.h>

int main()
{
    struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier; // S, A, B, C, D, F
    } Pikachu, Charizard, Blastoise;

    Pikachu.hp = 35;
    Pikachu.speed = 90;
    Pikachu.attack = 55;
    Pikachu.tier = 'A';

    printf("Pikachu's HP: %d\n", Pikachu.hp);
    printf("Pikachu's Speed: %d\n", Pikachu.speed);
    printf("Pikachu's Attack: %d\n", Pikachu.attack);
    printf("Pikachu's Tier: %c\n\n", Pikachu.tier);

    Charizard.hp = 78;
    Charizard.speed = 100;
    Charizard.attack = 84;
    Charizard.tier = 'S';

    printf("Charizard's HP: %d\n", Charizard.hp);
    printf("Charizard's Speed: %d\n", Charizard.speed);
    printf("Charizard's Attack: %d\n", Charizard.attack);
    printf("Charizard's Tier: %c\n\n", Charizard.tier);

    Blastoise.hp = 79;
    Blastoise.speed = 78;
    Blastoise.attack = 83;
    Blastoise.tier = 'S';

    printf("Blastoise's HP: %d\n", Blastoise.hp);
    printf("Blastoise's Speed: %d\n", Blastoise.speed);
    printf("Blastoise's Attack: %d\n", Blastoise.attack);
    printf("Blastoise's Tier: %c\n", Blastoise.tier);

    return 0;
}