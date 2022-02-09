/* Write a program using a afunction which calculatate the sum and avarage of two numbers
    . Use pointer and print the value of sum and avarage in main()  */

#include <stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %f\n", avg);

    return 0;
}