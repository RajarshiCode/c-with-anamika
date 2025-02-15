#include<stdio.h>
/*
    1234 - 4321
*/
int main(){
    int num = 1234, s = 0;
    int copy = num;

    while(copy!=0){
        s = s*10 + (copy%10);
        copy = copy/10; // 489    48 9   48 
    }

    /*
        DRY RUN
        
        1234 - copy s = 0        
        s = 9
        copy = 48

        s = 98
        copy = 4

        s = s*10 + 4 = 98 * 10 +4 = 984
        copy = 0

    */
    
    //printf("%d",s);

    // int x = 483;
    // printf("%d", x/10);
    return 0;
}