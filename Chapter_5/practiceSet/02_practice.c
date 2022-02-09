/* Write a program to convert celcius tempeature into faranite */

#include<stdio.h>
int faranite(int n);
int main(){
    int n, result;
    printf("Enter the number: ");
    scanf("%d", n);
    printf("The value of the given temp into feranite is %d", result);
    return 0;
}

int faranite(int n){
    int result;
    result = (n * 9/5) + 32;
    return result;

}