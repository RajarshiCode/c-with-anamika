#include <stdio.h>

void insertEle(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(*ptr++));
    }
}

void printArray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *ptr++);
    }
}

int main()
{
    int n = 5; // size of the array,
    int arr[n]; //{1, 2, 3, 4, 5}
    insertEle(&arr[0], n);
    printf("\n");
    //printf("%d", arr); //random access
    printArray(&arr[0], n);
    return 0;
}