#include <stdio.h>
/* Sum is a function which takes a and b as input 
    and return  integer as a output */
int sum(int a, int b); //--> Function prototypes
int main()
{
    int c;
    c = sum(5, 2); // --> Function call.
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}