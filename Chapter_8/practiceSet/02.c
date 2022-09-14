#include<stdio.h>
#include<string.h>
void reverseSentance();
int main(){
    printf("Enter The String: ");
    reverseSentance();
    return 0;
}

void reverseSentance(){
    char c;
    scanf("%c", &c);
    if(c != '\n'){
        reverseSentance();
        printf("%c", c);
    }
}