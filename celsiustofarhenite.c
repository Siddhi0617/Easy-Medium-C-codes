#include<stdio.h>

void main()
{
    float c,f;
    printf("Enter Temperature in Celsius:");
    scanf("%f", &c);
    f=(c * 9/5) + 32;
    printf("Temperature in Farhenheit = %.2f\n",f);
}
