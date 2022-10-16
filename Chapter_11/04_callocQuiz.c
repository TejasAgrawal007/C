#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("How Many Ini Do You want to enter: ");
    scanf("%d", &n);
    ptr = (int *) calloc(n , sizeof(int));

    for(int i = 0; i<n; i++){
        printf("Enter The value of %d element is: \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Calloc - By Default Init 0 Value.

    for(int i = 0; i<n; i++){
        printf("The value of %d element is %d: \n", i, ptr[i]);
    }

    return 0;
}