#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n = 10;
    ptr = (int*) calloc(n, sizeof(int));

    //entering elemets
    for(int i =0 ;i<10; i++)
        ptr[i] = i+1;
        
    for(int i = 0; i<10; i++)
        printf("%d\t", ptr[i]);
    printf("\n");      

    return 0;
}