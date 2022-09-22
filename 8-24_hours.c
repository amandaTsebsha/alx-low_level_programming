// Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

#include <stdio.h>

void jack_bauer(void){
    int hr;
    int min;

    for(hr = 0; hr < 24; hr++){

        for(min = 0; min < 60; min++){

            putchar((hr/ 10) + '0');
            putchar((hr/ 10) + '0');
            putchar(':');
            putchar((min / 10) + '0');
            putchar((min / 10) + '0');
            putchar('\n');

            
        }
    }
}

   int main(){
        jack_bauer();
        return 0;
    }