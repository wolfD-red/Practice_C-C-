#include <stdio.h>
#include <stdlib.h>




int main (){

int Password;
double Response1;
char Username [20];

    printf ("Welcome to Reddit!\n");
    
    printf("Already a redditor?\n");

    printf("[1] Yes  --  [2] No:  ", Response1);
    scanf("%lf", &Response1);
   
if (Response1 == '1'){

    printf ("LOGIN\n");
    }

else if (Response1 == '2'){
   printf("CREATE AN ACCOUNT\n");
}

else {
    printf("Invalid Response");
}














    return 0;
}

