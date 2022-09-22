// Write a function that checks for lowercase character.

#include <stdio.h>
#include <ctype.h>
#include <cstring>

int main(void){
    int r;

    r = islower('H');
    putchar(r + '0');

    r = islower('o');
    putchar(r + '1');

    r = islower(108);
    putchar(r + '0');
    
    putchar('\n');

    return (0);
}