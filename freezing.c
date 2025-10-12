#include <stdio.h>

int main()
 {
    float temperature;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);
    if (temperature > 0) 
    {
        printf("The temperature is above the freezing point.\n");
    } else if (temperature == 0) 
    {
        printf("The temperature is exactly at the freezing point.\n");
    } else 
    {
        printf("The temperature is below the freezing point.\n");
    }

    return 0;
}