#include <stdio.h>
float energy(float m, float v) 
{
    return 0.5 * m * v * v;
}
int main() 
{
    float m, v;
    printf("Enter mass (kg) and velocity (m/s): ");
    scanf("%f%f", &m, &v);
    printf("Kinetic Energy = %.2f J\n", energy(m,v));
    return 0;
}
