#include <stdio.h>

int main()
 {
    int income;

    printf("Enter your family income : ");
    scanf("%d", &income);

    if ( income <= 200000) 
    {
        printf(" You are eligible for the scholarship.\n");
    }
    else 
    {
        printf(" you are not eligible for the scholarship.\n");
    }

    return 0;
}