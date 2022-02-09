/* Use the liberiy function to calculate the area of square 
with side a */

#include <stdio.h>
int area(int a);
int main()
{
    int b;
    printf("Enter the number: ");
    scanf("%d", &b);
    b = area(b);
    printf("The area of square %d", b);
    return 0;
}

int area(int a)
{
    int b;
    b = a * a;
}