#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the number\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("a is a greater number which is:  %d", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("B is a greater Number which is:  %d", b);
    }
    else if (c >= a && a >= b && c >= d)
    {
        printf("c is a greater Number which is:  %d", c);
    }
    else
    {
        printf("D is a greter number which is:  %d", d);
    }
    return 0;
}