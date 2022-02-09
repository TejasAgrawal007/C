// Check whether the given number is Even  or not

#include <stdio.h>

int main()
{
    int n;
    printf("Enter The number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            printf("The Given number is Even %d\n", n);
            break;
        }
        else
        {
            printf("The given number is odd %d\n", n);
            break;
        }
    }
    return 0;
}


//  Yheeeeeeeeehhaaaaaaaaaaaaaaaaaaaaaaaaaaaaa Complate !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!