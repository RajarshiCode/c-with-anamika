#include<stdio.h>

int main(){
    /*  
        increment and decrement operator
        post increment and pre increment
        post decrement and pre decrement

        int a = 5;
        a++;//post
        ++a;//pre;
    
    */
    int a = 5, b = 5;
    // printf("%d\n", a++);
    // printf("%d", a); //post

    printf("%d\n", ++a);
    printf("%d\n", a); //pre


    printf("%d\n", b--);
    printf("%d\n", b); //post
    
    // printf("%d\n", --a);
    // printf("%d", a); //pre
    return 0;
}