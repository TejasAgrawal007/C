#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        printf("The value is %d\n", i);
    }
    return 0;
}