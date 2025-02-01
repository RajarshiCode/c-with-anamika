#include<stdio.h>
#include<string.h>

int main(){

    /*
        null character, -> '\0';
    */
    char str[] = {'i', 'n','d','i','a', '\0', 'Z'};
    printf("%s", str);
    char s[] = "india is a country";
    printf("\nThe length : %d", strlen(s));
    return 0;
}