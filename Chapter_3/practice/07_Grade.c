#include<stdio.h>

int main(){
    char grade;
    // prinntf("Enter The Grade('a', 'b', 'c', 'd')\t");
    printf("Enter The Grade \t");
    scanf("%c", &grade);

    switch(grade){
        case 'a':
            printf("Excellent!\n");
            break;
        
        case 'b':
            printf("Well Done!\n");
            break;
        
        case 'c':
            printf("you Passed!\n");
            break;
        
        case 'd':
            prinf("Sorry You are Failed!\n");
            break;
        
        default:
            printf("Invalid Grade\n");
    }
    return 0;
}