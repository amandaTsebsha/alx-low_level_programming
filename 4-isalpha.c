// Write a function that checks for alphabetic character.

#include <stdio.h>
#include <ctype.h>
// #include "main.h"

int main(void){

    int c;
    
    c = isalpha('a');
    putchar(c + '1');

    c = isalpha('W');
    putchar(c + '1');

    c = isalpha(89);
    putchar(c +'0');
    
    c = isalpha('*');
    putchar(c +'0');

    return 0;
    

        


}