
#include <stdio.h>

void inputArr(int *ptr, int n){
    for(int i = 0; i<n; i++){
        printf("Enter at %d = ", i);
        scanf("%d", &(*ptr++));
    }

        
}

void printArr(int *ptr, int n){
    for(int i = 0; i<n; i++){
        printf("Element at %d = ", i);
        printf("%d\n", *ptr++);
    }
}
int main()
{
    int n = 10;
    int arr[n];
    inputArr(arr, n);
    // for(int i = 0; i<n; i++){
    //     scanf("%d", &arr[i]);
    // }
    
    printf("\nPrinting the array using a function\n");
    printArr(arr, n);
    
    
    
    return 0;
}
