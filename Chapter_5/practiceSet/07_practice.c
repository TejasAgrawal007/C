#include <stdio.h>

int main()
{
    int n;
    printf("ENter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}