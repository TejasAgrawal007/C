// LowerCase or not

#include <stdio.h>

int main()
{
    // 97-122 a-z ---AssCII value
    char ch;
    printf("Enter the characters\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("Its a lowerCase char\n");
    }
    else
    {
        printf("Its a Not a Lower Case char\n");
    }
    return 0;
}