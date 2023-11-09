#include <stdio.h>
#include <stdlib.h>


int main () {

    int choice;

printf("FIND MINJI\n");
printf("You have a dog named Minji.\n");
printf("She loves the dog park, adventure in the forest and socializing with other dogs ");
printf("but scared of the abandoned house two blocks away.\n");
printf("Minji went missing 24 hours ago. The last you saw of her was when she was playing with her squishy ball.\n");
printf("Where should we look for her?\n");

printf("(1) Dog Park\n");
printf("(2) Forest\n");
printf("(3) Abandoned house\n");
scanf("%d", &choice);

if (choice == 1)
{
    int choiceagain1;

    printf("You went to the park and asked. No one saw her.\n");
    printf("(1) Look more.\n");
    printf("(2) Go home.\n");
    scanf("%d", &choiceagain1);

    if (choiceagain1 == 1)
    {
        printf("While looking until it went dark, you were mugged.\n");
    }
    else if (choiceagain1 == 2)
    {
        printf("You never find Minji.\n");
    }
    
    printf("GAME OVER");

}
else if (choice == 2)
{
    int choiceagain2;
    printf("You went to the forest. There was rustling sound from a distance.\n");
    printf("(1) Follow the rustling sound. \n");
    printf("(2) Look somewhere away from the sound. \n");
    scanf ("%d", &choiceagain2);

    if (choiceagain2 == 1)
    {
        printf("As you approach the rustling sound. It stopped. A beast leap to you.\n");
    }
    else if (choiceagain2 == 2)
    {
        printf("You never find Minji.\n");
    }
    
    printf("GAME OVER");

}


else if (choice == 3)
{
    int choiceagain3;

    printf("You went to the abandoned house but it is locked. You heard small noises upstairs.\n");
    printf("(1) Break the lock.\n");
    printf("(2) Look for another entry.\n");
    scanf("%d", &choiceagain3);
    
    if (choiceagain3 == 1)
    {
        printf("You break the lock. Soon after the door fell into you.\n");
        printf("GAME OVER");
    }
    else if (choiceagain3 == 2)
    {
        int choiceagain33;
        printf("You went to the back of the house and found a small entry way.\n");
        printf("You're inside the house. The small noises turn into muffled cries.\n");
        printf("(1) Go upstairs and check.\n");
        printf("(2) Turn back and go home.\n");
        scanf("%d", &choiceagain33);

        if (choiceagain33 == 1)
        {
            printf("You go upstairs and found Minji caressing 3 puppies.\n");
            printf("CONGRATULATIONS, you found Minji!\n");
            
        }
        else if (choiceagain33 == 2)
        {
            printf("You never find Minji.\n");
            printf("GAME OVER");
        }
        

    }
    
}

    return 0;
}