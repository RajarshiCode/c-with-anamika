#include<stdio.h>

int main(){
    /*
        Pointer is a special type of variable which stores address of another variable.    

        %p for hexadecimal value
        %u for decimal value
    */
    int n = 5;
    int *j = &n;
    int *k = &j;
    printf("Value of n = %d\n", n);
    printf("Address of n = %p\n", j);
    printf("Address of n = %p\n", &n);
    printf("Value of n = %d\n", *(j));
    printf("Value of n = %d\n", *(&n));
    printf("Value of n = %d\n", **(&j));
    return 0;
}

/*
    Hexadecimal
        0 - F
        10 - A
        ..
        15 - F

 */