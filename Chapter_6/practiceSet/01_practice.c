/* Writeeea a programm to print the address of the variables. Use this
addres to get the value of the variables    */


#include<stdio.h>

int main(){
    int a;
    int *ptr;
    ptr = &a;
    printf("The address of a is %u\n", ptr);
    printf("The value of a is %d\n", *ptr);
    return 0;
}