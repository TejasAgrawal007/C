#include<stdio.h>

int main(){
    char *ptr = "Tejas Bhai"; // Valid 
    // char ptr[] = "Tejas Bhai"; // Not Valid


    ptr = "Tejas Bhai"; 
    printf("%s", ptr);
    return 0;
}