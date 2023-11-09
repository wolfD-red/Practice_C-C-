#include <stdio.h>

int main() {
    int choice;

    printf("FIND MINJI\n");
    printf("You have a dog named Minji.\n");
    printf("Loves: Dogs, Dog park, forest and red ball\n");
    printf("Hates: Abandoned house and mouse\n");
    printf("Minji is MISSING! Where should we look for her?\n");
    printf("(1) Dog Park\n");
    printf("(2) Abandoned House\n");
    printf("(3) Forest\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You went to the dog park and asked. No one saw her.\n");
        printf("(1) Look more.\n");
        printf("(2) Go home.\n");
        scanf("%d", &choice);

        if (choice == 1) {
        printf("While looking until it went dark, you get mugged.\n");
        }
        else if (choice == 2) {
        printf("You never find Minji.\n");
        }
        printf("GAME OVER");
    } else if (choice == 2) {
        printf("You went to the abandoned house\n");
        printf("The house is locked.\n");
        printf("(1) Break the lock.\n");
        printf("(2) Look for another entry.\n");
        scanf("%d", &choice);
        if (choice == 1) {
        printf("You broke and the door fell into you.\n");
        printf("GAME OVER");} 
        else if (choice == 2) {
        printf("You found another way at the back of the house\n");
        printf("You heard muffled cries upstairs\n");
        printf("(1) Go upstairs and investigate\n");
        printf("(2) Leave the house\n");
        scanf("%d", &choice);

            if (choice == 1) {
                printf("You found Minji caressing 3 puppies upstairs.\n");
                printf("CONGATULATIONS! You found Minji!\n");}
            else if (choice == 2) {
                printf("You never found Minji\n");
                printf("GAME OVER");}
        }   
    } else if (choice == 3) {
        printf("You went to the forest\n");
        printf("There was no trace of Minji.\n");
        printf("(1) Look further.\n");
        printf("(2) Turn back.\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("You venture deeper into the forest and got lost.\n");} 
        else if (choice == 2) {
            printf("You turn back.\n");
            printf("You never find Minji.\n");}
            printf("GAME OVER");
    }

    return 0;
}




