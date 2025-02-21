#include<stdio.h>

int main(){
    /*
        1 2 3 4 5 6
        1 12 123 1234 12345

        1
        12
        123
        1234
        12345

    */
    // for(int i = 1; i<=5; i++){
    //     for(int j = 1; j<=i; j++){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    /*
        12345
        1234
        123
        12
        1
    
    */
    // for(int i = 5; i>=1; i--){
    //     for(int j = 1; j<=i; j++){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    /*
        54321  1
        5432   2
        543    3
        54     4
        5      5

        54321  
        5432   
        543    
        54
        5
        54
        543
        5432
        54321      
    
    */
    // for(int i = 1; i<=4; i++){
    //     for(int j = 5; j>=i; j--){
    //         // printf("%d", j);
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i = 5; i>=1; i--){
    //     for(int j = 5; j>=i; j--){
    //         printf("*");
    //          // printf("%d", j);
    //     }
    //     printf("\n");
    // }

    /*
        A
        AB
        ABC
        ABCD
        ABCDE
        ABCD    1234
        ABC     123
        AB      12
        A       1
    */
    for(int i = 65; i<=69; i++){
        for(int j = 65; j<=i; j++){
            printf("%c", (char)j);
        }
        printf("\n");
    }
    for(int i = 68; i>=65; i--){
        for(int j = 65; j<=i; j++){
            printf("%c", (char)j);
        }
        printf("\n");
    }

    return 0;
} 


/*
    A
    BB
    CCC
    DDDD
    EEEEE


*/
