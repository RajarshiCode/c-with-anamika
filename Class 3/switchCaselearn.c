#include<stdio.h>

int main(){
    
    /*
        choice is either int or char. If double or float then precision error occurs
        break statement is optional, 
        default is also optional

        there can be N no. of cases.
    
    
    */

//    int ch = 2;

//    switch(ch){
//     case 1:
//         printf("Mutton Biryani\n");
//         break;
//     case 2:
//         printf("Chicken Biryani\n");
//          break;
//     default:
//         printf("invalid input\n");
//         break;
//    }


    //fall through
    char ch = 'a';
    
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
        default:
            printf("consonant");
            break;
    }





    return 0;
}