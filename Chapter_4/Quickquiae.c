#include <stdio.h>

int main()
{
    int a = 1;
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    do
    {
        printf("The number are %d\n", a);
        a++;
    } while (a <= n);

    return 0;
}