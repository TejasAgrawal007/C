/* write a program to print multiplication table of a given number */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        printf("The Value is %d\n", i * n);
    }
    return 0;
}