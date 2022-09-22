// Write a function that computes the absolute value of an integer.

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int absolute;

    absolute = abs(-1);
    printf("%d\n", absolute);

    absolute = abs(56);    
    printf("%d\n", absolute);

    absolute = abs(0);
    printf("%d\n", absolute);

    absolute = abs(1);
    printf("%d\n", absolute);



    return 0;

}
