
// Write a function that prints the alphabet, in lowercase, followed by a new line.


#include <stdio.h>

int main(){
    
// initialise a char variable called alphabet
    char alphabet;
    
// the program will start printing from alphabet a
    alphabet = 'a';
    
// loop through the alphabets until the program reaches last alphabet z
    while(alphabet<='z'){
// print each alphabet
        putchar(alphabet);
// keep incrementing the alphabets
        ++alphabet;
    }
    return 0;
}