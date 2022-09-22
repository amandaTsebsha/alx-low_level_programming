// Write a function that prints all natural numbers from n to 98, followed by a new line.
#include <stdio.h>

void print_to_98(int n){

    if(n <= 98){
        for(n = n; n <= 97; n++){
            printf("%d " "," , n);
    }

    } else{
        for(n = n; n >= 98; n--)
            printf("%d " "," , n);
    }
    printf("\n");


}


int main(void){
    print_to_98(111);
    print_to_98(52);
    print_to_98(0);
    print_to_98(-5);

    return 0;
}
