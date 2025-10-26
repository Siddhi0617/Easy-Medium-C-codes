#include <stdio.h>
float rectArea(float l, float b) 
{
    return l * b;
}
int main() 
{
    float l,b;
    printf("Enter length and breadth: ");
    scanf("%f%f", &l, &b);
    printf("Area = %.2f\n", rectArea(l,b));
    return 0;
}
