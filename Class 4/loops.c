#include <stdio.h>

int main()
{
    /*
        Entry and Exit Controlled Loops

        Entry Controlled Loops
            for loop
            while loop
        Exit Loop Controlled
            do-while

        while(condition){
            //body
            //increment or decrement
        }

        do{
            //body
            //increment or decerement
        }while();

        for(initialization ; condition ; increment or decrement){
            //body
        }

    */

    // print 1 to 10
    int i = 1; 
    //while
    // while(i<=10){
    //     printf("%d\t", i++);
    //     //++i;
    //     //i++;
    // }
    
    //do-while
    // do{
    //     printf("%d\t", i);
    //     i++;
    // }while(i<=10);




    for(i = 10; i>=1; i--){
        printf("%d\t", i);
    }
    return 0;

    /*
        for(int i = 1; i<=10;i++)
        for(initialization ; condition ; increment or decrement){
            //body
            // one time execute of loop body - iteration
            // condition didn't matched - termination

        }
    
    
    
    
    
    
    */
}