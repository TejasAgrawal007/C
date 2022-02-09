#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of 4 + 7 is %d", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 3; //--> check note
    b = 5; //--> check note
    return c; 
}

//  Note:- App ak function ke medium se main ko change nai kr skta.