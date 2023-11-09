#include <stdio.h>
#include <stdlib.h>

int main () {

double fnum;
double snum;
char operator;

printf("Enter first number: ", fnum);
scanf("%lf", &fnum);
printf("Enter operator: ", operator);
scanf(" %c", &operator);                  /* May space dapat si %c para gumana.*/
printf("Enter second number: ", snum);
scanf("%lf", &snum);

if (operator == '+')
{
    printf("The sum is %f", fnum + snum);
}
else if (operator == '-')
{
    printf("The difference is %f", fnum - snum);
}
else if (operator == '*')
{
    printf("The product is %f", fnum * snum);
}
else if (operator == '/')
{
        if (snum == 0)
        {
            printf("Math Error");
        } else{
            printf("The quotient is %f", fnum / snum);}
}else{
    printf("Invalid operator.");
}


    return 0;
}