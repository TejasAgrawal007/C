// C Program to check the given number is even or odd
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a Number\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The Given Number is Even\n", a);
    }
    else
    {
        printf("The G   iven Number is Odd", a);
    }
    return 0;
}