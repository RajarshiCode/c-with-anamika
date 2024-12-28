#include<stdio.h>

int main(){

    /*
        || && !-not operator


        || logical OR operator checks whether one of the condition is true or not

        && logical AND operator checks whether boths of the conditions are true or not

        ! logical NOT operator, reverses the condition
    */
    
    int a = 10, b = 9, c = 15;    

    if(!(a>b))
        printf("if executed");
    else
        printf("else executed");

    return 0;
}