// Write a program to print multiplaction table in reverse order

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for (int i = 0; i; i--)
//     {
//         printf("n X  %d = %d\n", i, i*n);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    printf("Enter the number: \n\n");
    for(int i=10; i; i--){
        printf("10 X %d = %d\n", i, 10*i);
    }
    return 0;
}