#include <stdio.h>

int main()
{
    /*
        its a collection of similar type data/variables stored in a contiguous memory location

        int i; //declaration
        int j = 0; //initialization
        int arr[10]; //array declaration

        what is the need to use array?
            to store multiple same type of data.
            random access/ index access
            index value starts from 0 - (n-1);

    */
    int n = 10;
    // 0 1 2 3 4 5 6 7 8 9
    // 1 2 3 4 5 6 7 8 9 10
    int arr[n];

    for (int i = 0; i < n; i++)    
        scanf("%d", &arr[i]);
    
    printf("Elements of the array:\n");
    for (int i = 0; i < n; i++)    
        printf("%d\t", arr[i]);    

    printf("\nrandom access = %d", arr[5]);

    int k = 0;
    printf("\nElements of the array:\n");
    while (k<n)
        printf("%d\t", arr[k++]);

    return 0;
}