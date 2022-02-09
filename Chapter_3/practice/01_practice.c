/* What will be th eoutput of following program

  int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

*/

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11\n");
    else
        printf("I am not 11\n");
    return 0;
}


// OutPut ---> I am 11.