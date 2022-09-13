#include<stdio.h>
#include<string.h>

int main(){

    // 1. strlen
    // char *ta = "Tejas";
    // int a = strlen(ta);
    // printf("The Length of string ta %d", a);

    // 2.strcpy
    // char *ta = "Tejas Agrawal";
    // char st2[45];
    // strcpy(st2, ta);
    // printf("Now The st2 is %s", st2);


    // 3. strcat
    // char ta1[45] = "Hello";
    // char *ta2 = " Tejas";
    // strcat(ta1, ta2);
    // printf("Now The ta1 is %s", ta1);


    // 4. strcmp
    char *ta1 = "Tejas";
    char ta2[] = "Agrawal";
    int val = strcmp(ta1,ta2);
    printf("Now The val is %d", val);
    return 0;
}