#include <stdio.h>

int User_record = 0;
const int record = 61;
char data_storage[61][6][100]; // Using a 2D array of strings

void Add_Data();
void View_Data();

int main() {
    int response;
    int response2;

    printf("\n");
    printf("         BSCS-1A IDENTIFICATION SYSTEM        \n");
    printf("\n");

    do {
        printf("\n");
        printf("********************************************\n");
        printf("********************MENU********************\n");
        printf("********************************************\n");
        printf("\n");

        printf("           What do you want to do?           \n");
        printf("---------------------------------------------\n");
        printf("(1) Add Data\n");
        printf("---------------------------------------------\n");
        printf("(2) View Data\n");
        printf("---------------------------------------------\n");
        printf("(3) Exit\n");
        printf("---------------------------------------------\n");
        scanf("%d", &response);

        if (response != 1 && response != 2 && response != 3) {
            printf("Invalid Response. Please choose 1 to Add Data, 2 to View Data, or 3 to Exit.\n");
        } else if (response == 1) {
            Add_Data();
        } else if (response == 2) {
            View_Data();
        } else if (response == 3) {
            printf("Are you sure?\n");
            printf("--------------------\n");
            printf("(1) Yes\n");
            printf("--------------------\n");
            printf("(2) No\n");
            printf("--------------------\n");
            scanf("%d", &response2);
            if (response2 == 1) {
                printf("Thank you! Rest assured that your information is well kept.\n");
                break;
            } else if (response2 == 2) {
                printf("\n");
            }
        }
    } while (response != 3 || response2 == 2);

    return 0;
}

void Add_Data() {
    char name[100], gender[100], address[100], contact_number[100], email[100];
    int age;

    printf("Enter Full Name: ");
    getchar(); // Clear newline character from the buffer
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove the newline character from the name

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Gender: ");
    getchar(); // Clear newline character from the buffer
    fgets(gender, sizeof(gender), stdin);
    gender[strcspn(gender, "\n")] = '\0'; // Remove the newline character from gender

    printf("Enter Contact Number: ");
    getchar(); // Clear newline character from the buffer
    fgets(contact_number, sizeof(contact_number), stdin);
    contact_number[strcspn(contact_number, "\n")] = '\0'; // Remove the newline character from contact_number

    printf("Enter Address: ");
    getchar(); // Clear newline character from the buffer
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = '\0'; // Remove the newline character from address

    printf("Enter Email Address: ");
    getchar(); // Clear newline character from the buffer
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0'; // Remove the newline character from email

    snprintf(data_storage[User_record][0], sizeof(data_storage[User_record][0]), "%s", name);
    snprintf(data_storage[User_record][1], sizeof(data_storage[User_record][1]), "%d", age);
    snprintf(data_storage[User_record][2], sizeof(data_storage[User_record][2]), "%s", gender);
    snprintf(data_storage[User_record][3], sizeof(data_storage[User_record][3]), "%s", contact_number);
    snprintf(data_storage[User_record][4], sizeof(data_storage[User_record][4]), "%s", address);
    snprintf(data_storage[User_record][5], sizeof(data_storage[User_record][5]), "%s", email);
    User_record++;
}

void View_Data() {
    if (User_record == 0) {
        printf("\n");
        printf("ERROR: There's No Data Found. Input Data First.\n");
        printf("\n");
    } else {
        printf("   Name   /  Age  /  Gender  /  Contact Number  /  Address  /  Email Address  \n");

        for (int i = 0; i < User_record; i++) {
            for (int j = 0; j < 6; j++) {
                printf("%s  /  ", data_storage[i][j]);
            }
            printf("\n");
        }
    }
}