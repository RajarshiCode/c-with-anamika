#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void reverse(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];   // 1 2 3 4 5 // 5 2 3 4 1 // 5 4 3 2 1
        arr[i] = arr[n - i - 1]; 
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int n = 5; // size of the array,
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printArray(arr, n);
    printf("\n");
    reverse(arr, n);
    printArray(arr, n);

    return 0;
}

/*
    1 2 3 4 5   5 4 3 2 1
    loop, function, array, strings
    Dry Run, pseudo codes, Snippets    

    1 2 3 4
    5 3 7 8
    9 10 11 12
*/