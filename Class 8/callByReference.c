#include<stdio.h>


void change(int *x){
    *x = *x*10;
}

int main(){
    int n = 5;
    printf("Before function call\n");
    printf("the value of n = %d\n", n);

    change(&n);

    printf("After function call\n");
    printf("n = %d\n", n);
    return 0;
}