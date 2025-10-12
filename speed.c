#include<stdio.h>

void main() 
{
    float distance, time, speed;

    printf("Enter the distance ");
    scanf("%f", &distance);

    printf("Enter the time : ");
    scanf("%f", &time);
    speed = distance / time;

    printf("Speed = %.2f units per time\n", speed);
}