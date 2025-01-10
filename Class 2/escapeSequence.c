#include<stdio.h>

int main(){
    /*
        \n for new line
        \t for tab
        \b for backspace
        \\ for \
        \" for "
        \' for '
        \? for ?
        \a for beep
    
    
    */
    printf("hello, wor\tld\n");
    printf("hello, wor\\ld\n");
    printf("hello, world\n");
    printf("hello, worl\"d\n");
    printf("\"hello, world\"\n");
    printf("hello, world");
    printf("hello, world\a");    
    return 0;
}