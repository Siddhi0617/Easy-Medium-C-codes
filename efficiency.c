#include <stdio.h>
float motorEfficiency(float input, float output) 
{
    return (output / input) * 100;
}

int main()
 {
    float input, output;
    printf("Enter input power (W): ");
    scanf("%f", &input);
    printf("Enter output power (W): ");
    scanf("%f", &output);
    printf("Motor Efficiency = %.1f%%\n", motorEfficiency(input, output));
    return 0;
}
