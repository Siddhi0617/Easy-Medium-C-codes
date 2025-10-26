#include <stdio.h>
float power(float v, float i, float t) 
{
    return v * i * t;
}
int main() 
{
    float v, i, t;
    printf("Enter voltage, current, and time (h): ");
    scanf("%f%f%f", &v, &i, &t);
    printf("Energy used = %.2f Wh\n", power(v,i,t));
    return 0;
}
