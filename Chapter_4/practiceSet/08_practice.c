// Write a program to chec prime number or not

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    int prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && i != 2)
        {
            printf("Enter the Number is not prime number\n");
            prime = 0;
            break;
        }
    }

    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }

    return 0;
}