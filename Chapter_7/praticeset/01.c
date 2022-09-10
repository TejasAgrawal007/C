// Create a Array of 10 element varyfing using pointer arithmatic that (ptr+2) point to the third element where ptr is pointer pointing to the first element of an array.


#include<stdio.h>

int main(){
    int arr[10];

    // int *ptr = &arr[0];
    int *ptr = arr;
    ptr = ptr + 2;

    if(ptr == &arr[2]){
        printf("These will point the same location/Address of an memory");
    }else{
        printf("These will Not point the same location/Address of an memory");
    }
    return 0;
}