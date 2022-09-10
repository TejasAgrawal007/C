#include <stdio.h>

int main()
{
    int marks[4]; // Allocate the Four Integer.

    printf("Enter The 1st Student marks: ");
    scanf("%d", &marks[0]);

    printf("Enter The 2st Student marks: ");
    scanf("%d", &marks[1]);

    printf("Enter The 3st Student marks: ");
    scanf("%d", &marks[2]);

    printf("Enter The 4st Student marks: ");
    scanf("%d", &marks[3]);

    printf("The Four All marks is %d, %d, %d and %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}