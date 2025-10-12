#include<stdio.h>

void main()
 {
    float milimeter, centimeter;

    printf("Enter length in millimeters: ");
    scanf("%f", &milimeter);

    centimeter = milimeter / 10.0;
 
    printf("%.2f milimeter = %.2f centimeter\n", milimeter,centimeter);
}