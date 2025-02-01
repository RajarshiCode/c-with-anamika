#include<stdio.h>
#include<string.h>

int main(){
    /*
        1800303400
        count the no. of zeros
    
    */
    char no[10];
    gets(no);
    int c = 0;
    //puts(no);
    for(int i = 0; i<strlen(no); ++i){
        //1800303400
        if(no[i]!='0')
            continue;
        else    
            c++;            
    }
    printf("\nno of zero present : %d", c);

    return 0;
}