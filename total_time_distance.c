#include <stdio.h>
float averageSpeed(float dist[], float time[], int n) 
{
    float totalDist=0, totalTime=0;
    for(int i=0;i<n;i++) {
        totalDist += dist[i];
        totalTime += time[i];
    }
    return totalDist / totalTime;
}

int main() 
{
    float dist[5], time[5];
    printf("Enter 5 distance readings (m): ");
    for(int i=0;i<5;i++) scanf("%f",&dist[i]);
    printf("Enter 5 time readings (s): ");
    for(int i=0;i<5;i++) scanf("%f",&time[i]);
    printf("Average Speed = %.2f m/s\n", averageSpeed(dist, time, 5));
    return 0;
}
