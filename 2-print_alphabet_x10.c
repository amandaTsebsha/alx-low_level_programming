// Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.


#include <stdio.h>

int main(){

    int i;
    for(i = 0; i < 10; i++){

        char alpha = 'a';
        while(alpha < 'z'){  

            
            putchar(alpha);
            alpha++;
            
        }   
        putchar(alpha);
        printf("\n");
        

    }

    return 0;

}