#include<stdio.h>

int main(){
        // learning break statement
        // for(int i = 1; i<=10; i++){
        //     if(i==5) 
        //         break;
        //     printf("%d\t", i);
        // }

        // int i = 1;
        // do{
        //     // if(i==5) 
        //     //     break;
        //     printf("%d\t", i++);            
        // }while(i<=10);

        // int i = 1;
        // while(i<=10){
        //     if(i==6)
        //         break;
        //     printf("%d\t", i++);
        // }


        //(i&1)!=1 - bitwise
        for(int i = 1; i<=20; i++){
            if(i%2==0) // skips 3
                continue;
            printf("%d\t", i);    
        }         
    return 0;
}   