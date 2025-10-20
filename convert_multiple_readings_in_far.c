#include <stdio.h>
void convertToFahrenheit(float c[], int n) 
{
    for(int i=0;i<n;i++)
        printf("%.2f°C = %.2f°F\n", c[i], (c[i]*9/5)+32);
}

int main()
 {
    float tempC[5];
    printf("Enter 5 temperature readings (°C): ");
    for(int i=0;i<5;i++) scanf("%f",&tempC[i]);
    convertToFahrenheit(tempC,5);
    return 0;
}

