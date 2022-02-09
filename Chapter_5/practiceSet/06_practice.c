#include <stdio.h>
void pritPattern(int n);
int main()
{
    int n = 3;
    pritPattern(n);
    return 0;
}

void pritPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    pritPattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}