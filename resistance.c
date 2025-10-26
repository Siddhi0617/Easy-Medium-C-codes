#include <stdio.h>
float resistance(float v, float i)
 {
    return v / i;
}
int main() 
{
    float v, i;
    printf("Enter voltage and current: ");
    scanf("%f%f", &v, &i);
    printf("Resistance = %.2f Ohms\n", resistance(v, i));
    return 0;
}
