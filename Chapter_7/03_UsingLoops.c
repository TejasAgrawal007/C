#include <stdio.h>

int main()
{
    int marks[5];

    for(int i=0; i<5; i++){
        printf("Enter The Marks of student %d\t", i + 1);
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<5; i++){
        printf("The Number of student is %d and his marks are:%d\n ", i + 1, marks[i]);
    }

    return 0;
}