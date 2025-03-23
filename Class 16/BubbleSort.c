#include <stdio.h>

int main()
{
    int arr[] = {1,6,2,74,1,2,0}; 
    int n = 7;
    for(int i = 0; i<7; i++){
        printf("%d\t", arr[i]);
    }
    
    for(int i = 0; i<n-1; i++){ // 0 1 2 3 4 5 -    N
        for(int j = 0; j<n-i-1; j++){ // 0 - 5 // 0 - 4 // 0 - 3 // 0 - 2 // 0 - 1 -- N
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\n after sorting\n");
    for(int i = 0; i<7; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}