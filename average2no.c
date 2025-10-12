#include <stdio.h>

void main()
 {
    float num1, num2, average;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    average = (num1 + num2 ) / 2;
    printf("Average = %.2f\n", average);

   
}