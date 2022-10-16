#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));

    for (float i = 0; i < 5; i++)
    {
        printf("Enter the value of %f element is: ", i + 1);
        scanf("%f", &ptr[i]);
    }

    for (float i = 0; i < 5; i++)
    {
        printf("The value of %f element is %f: ", i + 1, ptr[i]);
    }

    return 0;
}