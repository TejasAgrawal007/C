#include<stdio.h>
#include<stdlib.h>

int main(){
    // sizeof Operator in c
    // printf("The value of int in c is %d\n", sizeof(int));
    // printf("The value of float in c is %d\n", sizeof(float));
    // printf("The value of char in c is %d\n", sizeof(char));

    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    for(int i = 0; i<6; i++){
        printf("Enter The value of %d element is: \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for(int i = 0; i<6; i++){
        printf("The value of %d element is %d: \n", i, ptr[i]);
    }

    return 0;
}