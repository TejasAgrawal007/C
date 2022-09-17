#include<stdio.h>
#include<string.h>

struct Employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct Employee e1;
    e1.code = 7;
    e1.salary = 100.0;
    // e1.name = "Tejas" //Wont Word
    strcpy(e1.name, "Tejas");
    
    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}