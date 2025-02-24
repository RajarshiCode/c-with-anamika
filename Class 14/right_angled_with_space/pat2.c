#include <stdio.h>
int main()
{
    for(int i = 5; i>=1 ; i--){
        for(int k = i; k<5 ; k++)
            printf(" ");
        for(int j = 5; j>=i ; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}