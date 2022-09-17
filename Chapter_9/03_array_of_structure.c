#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 200.5;
    strcpy(facebook[0].name,"Tejas");

    facebook[1].code = 200;
    facebook[1].salary = 300.5;
    strcpy(facebook[1].name, "Siya");

    facebook[2].code = 300;
    facebook[2].salary = 400.5;
    strcpy(facebook[2].name, "Prateek");
    strcpy(facebook[2].name, "Prateek");

    printf("\nDone");

    return 0;
}