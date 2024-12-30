#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 12; // declaraton and intialization

    // if(a<b)
    //     printf("something");
    // else
    //     printf("not something");

    // find the smallest no.
    //  if(a<b){
    //      //nested if
    //      if(a<c)
    //          printf("a is smallest");
    //  }
    //  else if(c<b){
    //      if(c<a)
    //          printf("c is smallest");
    //  }
    //  else
    //      printf("b is smallest");

    //optimization
    if ((a<b) && (a<c))
        printf("a is smallest");
    else if ((c<a) && (c<b))
        printf("c is smallest");
    else
        printf("b is smallest");

    return 0;
}