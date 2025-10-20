#include <stdio.h>
float avgVoltage(float volts[], int n)
 {
    float sum = 0;
    for(int i=0;i<n;i++)
        sum += volts[i];
    return sum / n;
}

int main() 
{
    float volts[5];
    printf("Enter 5 voltage readings: ");
    for(int i=0;i<5;i++)
        scanf("%f", &volts[i]);
    printf("Average Battery Voltage = %.2f V\n", avgVoltage(volts,5));
    return 0;
}
