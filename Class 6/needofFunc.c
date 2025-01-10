#include<stdio.h>
/*
    we will functions from today
*/

//int sum(int, int); // fucntions prototype
int sum(int x, int y ){
    return x+y; // jump statements return need
} // fucntions definition
int main(){
    int a1 = 5;
    int a2 = 10;
    // int ans = sum(a1, a2);
    printf("sum = %d", sum(a1, a2));
    return 0;
}