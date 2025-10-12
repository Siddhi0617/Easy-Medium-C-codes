#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0 || num > 50) 
    {
        printf("%d is either less than 0 or greater than 50.\n", num);
    } else
     {
        printf("%d is between 0 and 50 (inclusive).\n", num);
    }

    return 0;
}