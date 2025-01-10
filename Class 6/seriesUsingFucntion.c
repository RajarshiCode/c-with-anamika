#include <stdio.h>
#include<math.h>
void series1(){
    //10 100 
    for(int i = 1; i<=5; i++){
        printf("%f\t", pow(10, i));
    }
}
void series2(){
    //1 11 111 1111
    //1 10+1 100+1 1000+1
    int temp = 1;
    for(int i = 1; i<=5; i++){
        printf("%d\t", temp);
        temp = temp * 10 + 1;
    }
}
int main()
{
    printf("Series 1 :\n");
    series1();
    printf("\nSeries 2 :\n");
    series2();
    //printf("Hello World");

    return 0;
}
