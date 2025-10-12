#include <stdio.h>

void main() 
{
    int day, month, year;

    printf("Enter birth day: ");
    scanf("%d", &day);

    printf("Enter birth month: ");
    scanf("%d", &month);

    printf("Enter birth year: ");
    scanf("%d", &year);

    printf("The  birth date is: %02d/%02d/%04d", day, month, year);

}