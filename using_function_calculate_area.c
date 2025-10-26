#include <stdio.h>
float calcArea(float r)
 {
    return 3.1416 * r * r;
}
int main()
 {
    float r;
    printf("Enter circle radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", calcArea(r));
    return 0;
}
