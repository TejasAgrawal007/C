#include <stdio.h>

int main()
{
    int num;
    printf("Enter Your Number: ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your Number is 1\n");
    }
    else if (num == 2)
    {
        printf("Your Number is 2\n");
    }
    else if (num == 3)
    {
        printf("your number is 3\n");
    }
    else
    {
        printf("I am still learning but its not a 1, 2, or 3 number");
    }
    return 0;
}