#include <stdio.h>

int main()
{
    char name[44];
    printf("Your Name is: ");
    gets(name);
    // printf("Your name is %s", name);
    puts(name);
    return 0;
}