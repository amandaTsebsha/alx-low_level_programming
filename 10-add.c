// Write a function that adds two integers and returns the result.

#include <stdio.h>

int add(int a,  int b){

    return (a + b);
}

int main(){

    int sum;

    sum = add(75, 13);
    printf("%d", sum);

    return 0;
}