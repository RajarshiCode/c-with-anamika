#include <stdio.h>

void pat1()
{
    /*
        1 1
        2 12
        3 123
        4 1234
        5 12345
        4 1234
        3 123
        2 12
        1 1

    */
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main()
{
    pat1();
    return 0;
}