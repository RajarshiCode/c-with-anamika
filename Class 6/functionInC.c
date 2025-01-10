#include<stdio.h>

/*
    x, y - parameter
    a, b - argument
*/
//user defined functions
int sum(int x, int y){
    return x+y;
}

int main(){
    /*
        functions, basics    
    */
    int a = 5, b = 10, c = sum(a,b);
    printf("Sum = %d\n", c);
    return 0;
}

/*
    #include<stdio.h>

void sum(int x, int y){
    printf("Sum = %d\n",x+y);
}
int main(){
    
    int a = 5, b = 10;
    sum(a,b);
    // printf("Sum = %d\n", c);
    return 0;
}

*/