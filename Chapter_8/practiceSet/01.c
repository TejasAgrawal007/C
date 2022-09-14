// Find The Frequency Of an Characters.

#include <stdio.h>
#include <string.h>
int main()
{

    char str[1000], ch;
    int count = 0;

    printf("Enter Your String: ");
    gets(str);

    printf("Enter Your Characters: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
        {
            ++count;
        }
    }
    printf("The Frequency of %c =  %d", ch, count);
    return 0;
}