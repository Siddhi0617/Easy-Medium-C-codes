#include <stdio.h>
float work(float f, float d)
 {
    return f * d;
}
int main() 
{
    float f, d;
    printf("Enter Force (N) and Distance (m): ");
    scanf("%f%f", &f, &d);
    printf("Work Done = %.2f J\n", work(f,d));
    return 0;
}
