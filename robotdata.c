#include <stdio.h>
int main()
{
    float data[5],sum=0;
    printf("Enter 5 sensor readings: ");
    for(int i=0;i<5;i++)
    {
        scanf("%f",&data[i]);
        sum+=data[i];
    }
    printf("Average Sensor Value=%.2f",sum/5);
    return 0;
}
