// Write a program to calculate simple interest for a set of value representing prienciple no of years
// rate of interest.

#include <stdio.h>

int main()
{
    int principle = 200, rate = 4, years = 1;
    int simpleInterest = (principle * rate * years) / 100;
    printf("The value of simple interest is %d", simpleInterest);

    return 0;
}