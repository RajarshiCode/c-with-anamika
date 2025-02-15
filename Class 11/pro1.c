#include<stdio.h>

struct em{
    int age;
    int marks;
};

int main(){
    
    struct em e1, e2;

    e1.age = 18;
    e2.age = 20;
    e1.marks = 89;
    e2.marks = 70;

   

    printf("\nAge of Employee 1  : %d", e1.age);
    printf("\nMarks of Employee 1  : %d", e1.marks);
    printf("\nAge of Employee 2  : %d", e2.age);
    printf("\nMarks of Employee 2  : %d", e2.marks);

    return 0;
}