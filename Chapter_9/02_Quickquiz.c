// Write a Program to store the details of  employee from the user define data. Use The Structure declared above. (Input)

#include <stdio.h>
#include <string.h>

struct Employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct Employee e1, e2, e3;

    printf("Enter The Value of code for e1: ");
    scanf("%d", &e1.code);

    printf("Enter The Value of salary for e1: ");
    scanf("%f", &e1.salary);

    printf("Enter The Value of name for e1: ");
    scanf("%s", &e1.name);

    printf("Enter The Value of code for e2: ");
    scanf("%d", &e2.code);

    printf("Enter The Value of salary for e2: ");
    scanf("%f", &e2.salary);

    printf("Enter The Value of name for e2: ");
    scanf("%s", &e2.name);

    printf("Enter The Value of code for e3: ");
    scanf("%d", &e3.code);

    printf("Enter The Value of salary for e3: ");
    scanf("%f", &e3.salary);

    printf("Enter The Value of name for e3: ");
    scanf("%s", &e3.name);

    printf("\n");
    printf("%d", e1.code);
    printf("\n");
    printf("%.2f", e1.salary);
    printf("\n");
    printf("%s", strcpy(e1.name, "Tejas"));

    printf("\n");
    printf("\n");
    printf("\n");

    printf("%d", e2.code);
    printf("\n");
    printf("%d", e2.salary);
    printf("\n");
    printf("%s", strcpy(e2.name, "Siya"));

    printf("\n");
    printf("\n");
    printf("\n");

    printf("%d", e3.code);
    printf("\n");
    printf("%d", e3.salary);
    printf("\n");
    printf("%s", strcpy(e3.name, "Harry"));

    return 0;
}
