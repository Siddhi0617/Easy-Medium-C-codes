#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num >= 1 && num <= 50)
    {
        printf(" Number lies between 1 to 50 ");
    }
    else
    {
        printf(" Number does not lie between 1 to 50 ");
    }
    return 0 ;
}