#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        
        printf("Enter The value of %d element is: \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d: \n", i, ptr[i]);
    }


    // Reallocate ptr using malloc
    ptr = realloc(ptr, 10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        
        printf("Enter The value of %d element is: \n", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d: \n", i, ptr[i]);
    }

    return 0;
}