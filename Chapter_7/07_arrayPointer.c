#include <stdio.h>

int main()
{
    // int marks[4];
    // int *ptr;
    // ptr = &marks[0];

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of the marks for student %d:\n", i + 1);
    //     scanf("%d", ptr);
    //     ptr++;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of the student %d is %d\n", i, marks[i]);
    // }

    int marks[4];
    int *ptr;
    ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of the students is %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The num of students is %d and marks is %d\n", i, marks[i]);
    }
    return 0;

}