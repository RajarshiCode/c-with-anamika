#include <stdio.h>
#include <math.h>

void checkForPrime(int *no)
{
    int c = 0;
    if (*no <= 1)
        printf("Not a prime no.");
    else
    {
        for (int i = 2; i <= sqrt(*no); i++)
        {
            if (*no % i == 0)
                c++;
        }
        if (c == 0)
            printf("its a Prime no.");
        else
            printf("Not a prime no.");
    }
}
int main()
{
    int no = 0;
    printf("Enter a no. to check whether it is prime or not:\n");
    scanf("%d", &no);
    checkForPrime(&no);
    return 0;
}