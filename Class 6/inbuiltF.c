#include<stdio.h>
#include<math.h>

int main(){
    /*
        pow - (a,b); - return type float, double
        sqrt - (4);
        cbrt - (27)
        ceil - (1.4)
        floor - (1.4)
    */
    printf("Power = %f\n",pow(2,3));
    printf("Sqaure root = %f\n",sqrt(4));
    printf("Cube root = %f\n",cbrt(27));
    printf("Ceil Function = %f\n",ceil(-1.4));
    printf("Floor Function = %f\n",floor(-1.4));
    
    return 0;
}