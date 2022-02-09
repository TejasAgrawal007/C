#include <stdio.h>

int main()
{
    int marks;
    printf("Enter a Marks You have\n");
    scanf("%d", &marks);

    switch (marks)
    {
    case (90 >= 100):
        printf("You got a A Grade");
        break;

    default:
        break;
    }

    return 0;
}