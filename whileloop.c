#include <stdio.h>

int main() {
    int response;
    char username[100]; // Using an array to store usernames
    char password[100]; // Using an array to store passwords

    printf("Welcome to Reddit!\n");

    do {
        printf("Already a Redditor?\n");
        printf("1. Yes ----- 2. No\n");
        scanf("%d", &response);

        if (response != 1 && response != 2) {
            printf("Invalid response. Please choose 1 to LOGIN or 2 to Create Account.\n");
        } else if (response == 1) {
            printf("LOGIN\n");
            printf("Username: ");
            scanf("%s", username);
            printf("Password: ");
            scanf("%s", password);
            printf("Welcome back, %s!\n", username);
        } else if (response == 2) {
            printf("CREATE ACCOUNT\n");
            printf("Username: ");
            scanf("%s", username);
            printf("Password: ");
            scanf("%s", password);
            printf("Welcome, %s\n", username);
        }
    } while (response != 1 && response != 2);

    printf("\n(1) Create Post - (2) View Post - (3) Subreddits");

    return 0;
}