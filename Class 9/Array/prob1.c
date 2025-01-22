#include <stdio.h>
int main()
{
    // 1 2 3 4 5 6, is 3 present yes or no
    int n = 6; // size of the array,
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    int c = 0, x = 3;
    // linear serach, Time Complexity - O(n)
    for(int i = 0; i<n;i++){
        if(arr[i]==x)
        {
           c=1; // 1 2 3 4 5 6
           break; //optimized
        }    
    }
    if(c==1)
        printf("yes");
    else    
        printf("no");
    return 0;
}