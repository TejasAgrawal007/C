#include<stdio.h>

int main(){
    char s[] = "Tejas is the Best Programmer!";
    int i;

    for(i=0; s[i] != '\0'; ++i);

    printf("The Length of String %d", i);
    return 0;
}