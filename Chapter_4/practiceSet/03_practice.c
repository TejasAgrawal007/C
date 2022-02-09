/* Write a program to print sum first 10 ntuural number 
using while loop */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter te number: \n");
    scanf("%d", &n);
    int i = 0, sum = 0;
    while (i <= n)
    {
        printf("The number are %d\n", i);
        sum += i;
        i++;
    }
    printf("The value of sum(1-10) is :  %d", sum);
    return 0;
}