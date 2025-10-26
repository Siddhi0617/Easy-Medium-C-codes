#include <stdio.h>
int main() 
{
    float cm, mm;
    printf("Enter length in centimeters: ");
    scanf("%f", &cm);
    mm = cm * 10;  // 1 cm = 10 mm
    printf("%.2f cm = %.2f mm\n", cm, mm);
    return 0;
}
