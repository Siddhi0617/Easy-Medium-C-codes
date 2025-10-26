#include <stdio.h>
float torque(float force, float radius)
 {
    return force * radius;
}
int main() 
{
    float f, r;
    printf("Enter force (N) and radius (m): ");
    scanf("%f%f", &f, &r);
    printf("Torque = %.2f N·m\n", torque(f, r));
    return 0;
}
