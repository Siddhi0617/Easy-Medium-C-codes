#include <stdio.h>
int main() 
{
    int distance;
    printf("Enter distance from obstacle (cm): ");
    scanf("%d", &distance);
    if(distance < 20) 
    printf("Obstacle too close! Stop.\n");
    else
    printf("Path is clear.\n");
    return 0;
}
