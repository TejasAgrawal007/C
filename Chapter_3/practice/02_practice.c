#include <stdio.h>

int main()
{
    int physics, chemistry, math;
    float total;

    printf("Enter Your Physic Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry marks\n");
    scanf("%d", &chemistry);

    printf("Enter Math marks\n");
    scanf("%d", &math);

    total = (physics + chemistry + math) / 3;

    if ((total < 40) || physics < 33 || math < 33 || chemistry < 33)
    {
        printf("Your total pecentage is %f and You are failed\n", total);
    }
    else
    {
        printf("Your total pecentage is %f and You are passed\n", total);
    }

    return 0;
}