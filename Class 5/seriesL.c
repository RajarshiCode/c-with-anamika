#include<stdio.h>

int main(){
    /*  
        basic loop
        1. cal. factorial of a number
        2. print table of 9
        3. check whether the no. is prime or not
        4. check whether the no. is perfect square or not
        5. sum and avg of all N natural numnbers
        6. check whether the no. is palindrome or not(using while loop)
        7. find the sum of all the digits in a no.(using while loop)

        series
        1. 1 11 111 1111 ........... upto 10 terms
        2. 1 12 123 1234 12345 123456........... upto 10 terms
        3. 1 3 6 10 15 21 28 36 45 55........... upto 10 terms
        4. 1 10 100 1000 10000 ........... upto 10 terms
        
    */
   int sum = 0;
    for(int i = 1; i<=10; i++){
        sum+=i; // sum = sum + i      sum+=i
        printf("%d\t", sum);
    }
        
    return 0;
}