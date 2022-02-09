// Caculate the Area of circule and modify the
// same program to area of cylender to hard code output.

#include <stdio.h>

int main()
{
    int radius = 3;
    float pi = 3.14;
    int height = 3;
    // printf("The area of circule is %f\n", pi*radius*radius);
    printf("The area of cylender is %f\n", pi * radius * radius / height);
    return 0;
}

//r(r + h)