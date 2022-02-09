/* Write a program having a variable i, print the address of i,
pass the variable to a function and print its address are same whay? */

#include <stdio.h>
void printAdd(int a)
{
    printf("The Address of variable a is %u\n", &a);
}
int main()
{
    int i = 4;
    printf("The value of variable is %d\n", i);
    printAdd(i);
    printf("The value of variable i is %u\n", &i);
    return 0;
}