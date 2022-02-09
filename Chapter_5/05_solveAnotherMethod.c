/* Use the liberiy function to calculate the area of square 
with side a */
#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the side: \n");
    scanf("%d", &side);

    printf("The area of square is %f", pow(side, 2));
    return 0;
}