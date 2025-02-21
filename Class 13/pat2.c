#include<stdio.h>

/*
    A
    AB
    ABC
    ABCD
    ABCDE
    ABCD
    ABC
    AB
    A

    ABCDE
    ABCD
    ABC
    AB
    A
    AB
    ABC
    ABCD
    ABCDE

*/


int main(){
    for(char i = 'A'; i<='E'; i++){
        for(char j = 'A'; j<=i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}