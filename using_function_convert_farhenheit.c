#include <stdio.h>
float toFahrenheit(float c) 
{
    return (c * 9 / 5) + 32;
}
int main() 
{
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit: %.2f°F\n", toFahrenheit(c));
    return 0;
}
