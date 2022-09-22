#include <stdio.h>

//PRACTISE FILE 
// 

int main(){
// Declare variable
    int num = 15;


// Declare constant Variable
    const float dec = 5.3;

// Output the variables with Format Specifier
    printf("%f", dec);
    printf("%d", num);

// Conditional Statements
    if(num > 85){
        printf("num is less");

    }else {
        printf("num is greater");
    }

// Short Hand If
    (num < 85) ? printf("Hello")  : printf("Bye");

//Switch Statements
    int day = 2;


    switch (day){
        case 1:
        printf("The day is Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 5:
        printf("ISAAA FRIDAY!!!");
        break;

        default:
            printf("KANTI WHen is the weekend");
    }

    int i = 0;

    while(i < 4){
        printf("%d\n", i);
        i++;
    }


    int j = 0;
    do{
        printf("%d", j);
        j++;
    }
    while(j < 5);


    int l;
    for(l = 0; l < 4; l++){
        printf("%d", l);
    }

    return 0;
}
