#include <stdio.h>

int main()
{
    int rating;
    printf("Enter Rating (1-5): \n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your Rating is 1\n");
        break;
    case 2:
        printf("Your Rating is 2\n");
        break;
    case 3:
        printf("Your Rating is 3\n");
        break;
    case 4:
        printf("Your Rating is 4\n");
        break;
    case 5:
        printf("Your Rating is 5\n");
        break;

    default:
        printf("Invalid Rating");
        break;
    }

    return 0;
}