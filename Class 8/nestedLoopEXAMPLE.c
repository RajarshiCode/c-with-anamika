// 1 12 123 1234 12345

/*
    loops, functions, arrays, strings
*/

#include<stdio.h>


void pat1(int n){
    /*
        1 1
        2 12
        3 123
        4 1234
        5 12345
    
    */
    for(int i = 1; i<=10;i++){
        for(int j = 1; j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
void pat2(int n){
    /*
        1
        10
        101
        1010

        1
        12
        123
        1234

    
    */
    for(int i = 1; i<=10;i++){
        for(int j = 1; j<=i;j++){
            if(j%2==0)
                printf("%d", 0);
            else
                printf("%d", 1);

        }
        printf("\n");
    }
}

int main(){
    
    pat1(10);
    printf("\n");
    pat2(10);
    return 0;
}

