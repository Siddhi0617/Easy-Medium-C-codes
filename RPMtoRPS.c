#include <stdio.h>
float rpmToRps(float rpm) 
{
    return rpm / 60;
}
int main() 
{
    float rpm;
    printf("Enter motor speed (RPM): ");
    scanf("%f", &rpm);
    printf("Speed in RPS = %.2f\n", rpmToRps(rpm));
    return 0;
}
