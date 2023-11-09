#include <stdio.h>


int main (){
    int first = 5;
    int last = 20;
    int power = 4;
    int sum = 0;
    int multy = 0;

    for (int i = first; i <= last; i++){
        multy = 1;                              /*We need to set 'multy' to 1 instead of 'first'
                                                so that the iteration inside the inner loop won't be
                                                carried unto the next term of the outer loop or basically,
                                                the sigma (summation) won't be multiplied to the 'power'.*/                         
        for (int j = 1; j <= power; j++){
            multy *= i;                         /*I want to only print out the last iteration of inner loop
                                                so I can show the results of the powered terms that needs to be 
                                                added to get the sigma (summation).*/
            if (j == power){                    
                printf(" %d /", multy);
            }
        }
        sum += multy; 
    } 
    printf("\n");
    printf("Summation: %d", sum);
    
    return 0;
}