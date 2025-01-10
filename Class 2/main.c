/*
    talk about format specifiers
    
    char and ascii, character, escape sequence
    A-Z = 65 - 90
    a-z = 97-122
    0-9 = 48-57
    space - 32

    \n \t \\n \" \'

    scanf();

    &

    types of operators in C language
    Arithmetic Operator -----> * / - + %
    Relational Operator -----> < > <= >= == != 
    Logical Operator -----> !(to reverse the condition), ||, &&
    Assignment Operator -----> =    

    naming convetions of variables and fucntions:-
    31 characters, alpha-numeric and contains special characters(_)
    1st characrter must be alphabet or underscore
    no blanks or commas allowed
    only underscore allowed as special character
 */
#include<stdio.h>
int main(){

    printf("The space charcter has been printed =%cyou can't see that.",(char)32);
    return 0;
}