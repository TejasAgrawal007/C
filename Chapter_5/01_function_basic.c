#include <stdio.h>
void display(); //  Function prototype

int main()
{
    int a;
    printf("This is Initilizing the display function\n");
    display(); // f-Call
    printf("Display functio finished its works\n");
    return 0;
}

void display()
{ // f-defn
    printf("Hello Tejas welcome to world of function!\n");
}