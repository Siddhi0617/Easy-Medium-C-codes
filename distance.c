#include <stdio.h>
float totalDistance(float steps[], int n)
 {
    float total = 0;
    for(int i=0;i<n;i++)
        total += steps[i];
    return total;
}

int main()
 {
    float steps[5];
    printf("Enter 5 step distances (in meters): ");
    for(int i=0;i<5;i++) scanf("%f",&steps[i]);
    printf("Total Distance = %.2f m\n", totalDistance(steps,5));
    return 0;
}
