// Calculate the Area of Circle and modify the
// same program to area of Cylinder to hard code output.

#include <stdio.h>

int main()
{
    int radius = 3;
    float pi = 3.14;
    int height = 3;
    // printf("The area of Circle is %f\n", pi*radius*radius);
    printf("The area of Cylinder is %f\n", pi * radius * radius / height);
    return 0;
}

//r(r + h)
