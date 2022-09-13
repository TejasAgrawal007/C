#include<stdio.h>

int main(){
    // char str[] = "Tejas";
    char str[] = {'T', 'E', 'J', 'A', 'S', '\0'};
    char *ptr = str;
    while (*ptr!='\0')  
    {
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}