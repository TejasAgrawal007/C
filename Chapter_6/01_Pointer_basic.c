#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;  // j will store the the addess of i.
    int **k = &j; // Pointer to a pointer.
    int ***l = &k;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of is on j is %u\n", *j);
    printf("The value of is on j is %u\n", *(&j));
    printf("The value of **k is %d\n", **k);
    printf("The value of k is %u\n", **(&j));
    printf("The value of ***l %u\n", ***(&l));
    return 0;
}