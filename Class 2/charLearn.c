#include <stdio.h>

int main()
{
    /*
        ASCII - American Standard Code for Information Interchange.
        ASCII values, codes
        charcters:
        A - Z -> 65 - 91
        a -z -> 97 - 122
        0 - 9 -> 48 - 57
        for space -> 32
        + - * / % & * @ # $

    */

    printf("fyi space is also a character%c.", (char)32);
    printf("\n%c\n", (char)65);
    printf("%c\n", (char)123);
    printf("%c\n", (char)122);
    printf("%c\n", (char)70);
    printf("%c\n", (char)20);
    printf("%c\n", (char)66);
    printf("%c\n", (char)89);

    // alt shift down key
    printf("hello, world"); 

    //typecaste
    char ch = 'F';
    printf("\nF's ascii value = %d", (int)ch);

    // int b = 2;
    // printf("\n%f", (double)b);

    double b = 2.365;
    printf("\n%d", (int)b);

    //implicit type casting
    //explicit type casting



    double br = 2.456;
    printf("\n%f", br);

    int bd = br;
    printf("\n%d", bd);
    return 0;
}