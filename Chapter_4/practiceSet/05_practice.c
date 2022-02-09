/* Write a c program for factorialof given number using for loop */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the factorial number as you want: ");
    scanf("%d", &n);
    int i = 0, factoria = 1;
    for (int i = 1; i <= n; i++)
    {
        factoria *= i;
    }

    printf("The value of factorial is %d is %d", n, factoria);

    return 0;
}