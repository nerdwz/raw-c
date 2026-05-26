/*
 * Challenge 09 - RPG Combat
 *
 * Practice:
 *   - if / else if / else chains
 *   - nested conditions
 *   - float arithmetic with percentages
 *
 * Task:
 *   Ask the user for a hero's attack power and a monster's defense.
 *   Ask for the attack type (1 = normal, 2 = heavy, 3 = critical).
 *   Print the damage dealt and whether the monster was defeated
 *   (defense = monster's HP).
 *
 *   Normal   : 100% attack, always hits
 *   Heavy    : 150% attack, hits only if attack > 20
 *   Critical : 200% attack, always hits
 *
 *   Damage below 0 is always 0.
 *
 *   Expected output:
 *   Hero attack: 30
 *   Monster defense: 40
 *   Attack type (1-3): 2
 *   Damage dealt: 45
 *   Monster defeated: Yes
 *
 */

#include <stdio.h>

int main() {

    // Variables
    int type;
    float attack, defense, damage;

    // Input
    printf("Hero attack: ");
        scanf("%f", &attack);

    printf("Monster defense: ");
        scanf("%f", &defense);

    printf("Attack type (1-3): ");
        scanf("%d", &type);

    // Conditions
    if (type == 1) {

        damage = attack;

    } else if (type == 2) {

        if (attack > 20) {
            damage = attack * 1.5;
        } else {
            damage = 0;
        }

    } else {

        damage = attack * 2;
    }

    // Output
    printf("Damage dealt: %.0f\n", damage);

    if (damage >= defense) {
        printf("Monster defeated: Yes\n");
    } else {
        printf("Monster defeated: No\n");
    }

    return 0;
}
