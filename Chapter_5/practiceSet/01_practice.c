// Write a program using function  to find the avarage of three numbers.

// #include <stdio.h>
// int avarage(int a, int b, int c);
// int main()
// {
//     int a, b, c;
//     printf("Enter the Number: \n");
//     scanf("%d %d %d", &a, &b, &c);
//     float x;
//     x = (a + b + c) / 3;
//     printf("The Avarage of given number is %f :", x);
//     return 0;
// }


#include<stdio.h>
float avarage(int a, int b, int c);
int main(){
    int a,b,c;
    printf("Enter the first Number: ");
    scanf("%d", &a);

    printf("Enter the secound Number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("The Avarage of three number is %f: ", avarage(a,b,c));
    return 0;
}

float avarage(int a, int b, int c){
    float result;
    result = (a + b + c)/3;
    return result;
}