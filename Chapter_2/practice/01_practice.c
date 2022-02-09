//  Which of the following is valid in c 
//  a) int a; b =a;
//  b) int v = 3^3;
//  c) char dt = '21 dec 2021';

#include<stdio.h>

int main(){
    // int a; int b =a; --> False
    int v = 3^3;
    printf("%d", v); //--> True
    // char dt = '21 dec 2021' --> False
    return 0;
}