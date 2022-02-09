#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generate random number between 1 to 100.
    // printf("The number is %d\n", number);
    // Keep running loop until the number is guess.
    // Time 0 will return a time in sec

    do
    {
        printf("Guess the number betwwen 1 to 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("you guessed in %d attemptes\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}
