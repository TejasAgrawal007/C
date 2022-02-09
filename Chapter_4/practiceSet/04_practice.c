/* Write a program tocalculate the sum of the number occuring in a multiplaction 
table of 8 (consider 8*1 and 8*10) */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; i++)
    {
        printf("The value of n is %d\n", i * n);
    }
    return 0;
}