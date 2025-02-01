#include <stdio.h>
#include <string.h>

int main()
{
    /*
        india - aidni


        india

        1 2 3 4 5 6 7 8 9
        9 8 7 6 5 4 3 2 1
    */

    char str[] = "india";
    printf("The word : %s",str);
    for (int i = 0; i<strlen(str)/2;i++){
        char temp = str[i];
        str[i] = str[strlen(str)-1-i];
        str[strlen(str)-1-i] = temp;
    }
    printf("\nThe Reversed word : %s",str);
    //printf("\nThe Reversed word : %s",strrev(str));
    return 0;
}