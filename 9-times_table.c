// Write a function that prints the 9 times table, starting with 0.

#include <stdio.h>

void time_table(void){

    int product, num1, num2;

    for(num1 = 0; num1 <= 10; num1++){
        
        for(num2 = 0; num2 <= 10; num2++){

            product = num1 * num2;

            if(num2 == 0){
                putchar('0');
            }

            if(num2 != 0){
                putchar(',');
                // putchar(' ');
            }

            if(product >= 10){
                putchar((product / 10) + '0');
                putchar((product % 10) + '0');

            }else if((product < 10) && (num2 != 0)){
                putchar((product % 10) + '0');
            }



        }
        putchar('\n');

    }


}

int main(){
    time_table();
    return 0;
}