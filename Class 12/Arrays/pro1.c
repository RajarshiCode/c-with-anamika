#include<stdio.h>
/*

    for traversing we loops
*/
int main(){
    int n = 10;
    int ar[n];

    for(int i = 0; i<n; i++)
        ar[i] = i+1; // 1 2 3 ....
    
    for(int i = 0; i<n; i++)
        printf("%d\t", ar[i]);
    
    int sum = 0;
    for(int i = 0; i<n;i++)
        sum+=ar[i];
    printf("\n%d", sum);    
    return 0;
}