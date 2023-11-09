#include <stdio.h>
#include <stdlib.h>



int main ()
{

double integer1;
double integer2;
char operator;

printf ("Enter First Number: ", integer1);
scanf ("%lf", &integer1);

printf ("Enter Operation: ", operator);
scanf (" %c", &operator);

printf("Enter Second Number: ", integer2);
scanf ("%lf", &integer2);

if (operator == '+')
{
    printf("%f", integer1 + integer2);
}
else if (operator == '-')
{
    printf("%f", integer1 - integer2);
}
else if (operator == '/')
{
    printf("%f", integer1 / integer2);
    
        
       
       
}
else if (operator == '*')
{
    printf("%f", integer1 * integer2);
}
else 
{
    printf("Math Error");
}


     return 0;
}




