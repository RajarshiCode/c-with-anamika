#include<stdio.h>

int sum(int, int); // function declaration
int main(){
    printf("sum = %d", sum(50,100)); //function calling
    return 0;
}
int sum(int a, int b){ // fucntion definition
    return a+b;
}