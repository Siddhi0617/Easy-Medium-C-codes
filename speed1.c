#include <stdio.h>
float averageSpeed(float speed[], int n)
 {
    float sum=0;
    for(int i=0;i<n;i++)
        sum += speed[i];
    return sum/n;
}

int main() 
{
    float speed[5];
    printf("Enter 5 motor speed readings (RPM): ");
    for(int i=0;i<5;i++) scanf("%f", &speed[i]);
    printf("Average Motor Speed = %.2f RPM\n", averageSpeed(speed,5));
    return 0;
}
