#include <stdio.h>
void checkTemperature(float temp[], int n) 
{
    for(int i=0;i<n;i++) 
    {
        if(temp[i] > 60)
            printf("Sensor %d: OVERHEAT (%.2f°C)\n", i+1, temp[i]);
        else if(temp[i] < 10)
            printf("Sensor %d: TOO COLD (%.2f°C)\n", i+1, temp[i]);
        else
            printf("Sensor %d: Normal (%.2f°C)\n", i+1, temp[i]);
    }
}

int main() 
{
    float temp[5];
    printf("Enter 5 temperature readings (°C): ");
    for(int i=0;i<5;i++) scanf("%f", &temp[i]);
    checkTemperature(temp,5);
    return 0;
}
