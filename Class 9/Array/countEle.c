#include<stdio.h>

int main(){
    int n = 10, x = 3, c = 0; // size of the array,
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i]==x)
            c++;
    }
    printf("%d came %d times",x,c);
    return 0;
}