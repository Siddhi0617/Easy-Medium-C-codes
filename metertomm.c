#include <stdio.h>
int main() 
{
    float meters, millimeters;
    printf("Enter length in meters: ");
    scanf("%f", &meters);
    millimeters = meters * 1000;  // 1 meter = 1000 mm
    printf("%.2f meters = %.2f millimeters\n", meters, millimeters);
    return 0;
}
