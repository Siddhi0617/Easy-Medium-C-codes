#include <stdio.h>

void main() 
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("The date is: %02d/%02d/%04d", day, month, year);

}