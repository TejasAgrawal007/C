#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 8;

    printf("The sum of a + b is:  %d\n", a + b);
    printf("The sum of a * b is:  %d\n", a * b);
    printf("The sum of a - b is:  %d\n", a - b);
    printf("The sum of a / b is:  %d\n", a / b);

    int z;
    z = b * a; // legal
    // b * a =z;   // Illigal

    printf("5 when divided by 2 the remender of %d\n", 5 % 2);

    // No operator is assumed to be present
    // printf("The value of 4 * 5 is %d\n" 4.5); ---> Wrong way
    // printf("The value of 4*5 is: %d", (4)(5));    ---> Wrong way
    printf("The value of 4*5 is: %d\n", (4) * (5)); // --> RIght way but not recomended

    // There is no operator perform exponentionalin c
    // ^ its a bitwise xor-Operator

    printf("The value of 4^5 %d\n", 4 ^ 5);
    // if you have need to do this

    printf("The value of 4^5 %f\n", pow(2, 5));

    printf("The value of 6 + 5 is %d\n", 6 + 5);
    printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);

    // Tyep conversion

    printf("The value of 5/2 is:  %d\n", 5 / 2);
    printf("The value of 2/5 is: %f\n", 2 / 5);

    int k = 3.0 / 9;
    printf("The value of 3.0/9 %f", k);

    return 0;
}