#include <stdio.h>
int main()
{
    for(int i = 1; i<=5 ; i++){
        for(int k = 5; k>i ; k--)
            printf(" ");
        for(int j = 1; j<=i ; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}

/*
1
12
123
1234
12345


    1
   12
  123
 1234
12345



*/