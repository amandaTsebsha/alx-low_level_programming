// Write a function that prints the last digit of a number.

#include <stdio.h>

int main(void){

    int last_digit;

    last_digit = 45 % 10;
    putchar('0' + last_digit);
    putchar('\n');
    

    last_digit = 0 % 10;
    putchar('0' + last_digit);
    putchar('\n');


    last_digit = -1024 % 10;
    printf("%d", last_digit);
    putchar('\n');
    

    last_digit = 526 % 10;
    putchar('0' + last_digit);
    putchar('\n');
    

    return 0;
}