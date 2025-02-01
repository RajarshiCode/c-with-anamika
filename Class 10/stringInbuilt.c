#include <stdio.h>
#include <string.h>

int main()
{
    /*
        strlen - length of the string
        strrev - reverse of a string
        strlwr - lowercase of a string
        strupr - uppercase of a string
    */
    char str[] = "india";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = (char)((int)str[i] - 32);
    }

    /*
             INDIA
    str[i] = (char)((int)str[i] + 32);

    ACII VALUE = (int)str[i]
    (char)((int)str[i])



    */
    printf("%s", str);
    return 0;
}