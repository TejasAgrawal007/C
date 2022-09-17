#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{

    struct employee tejas = {100, 24.26, "Tejas"};

    printf("code is %d\n: ", tejas.code); 
    printf("Salary is %.2f\n: ", tejas.salary); 
    printf("Name is %s\n: ", tejas.name); 


    return 0;
} 