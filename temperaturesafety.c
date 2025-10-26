#include <stdio.h>
int main()
 {
    float temp;
    printf("Enter machine temperature (°C): ");
    scanf("%f", &temp);
    if(temp > 80)
        printf("Warning: Overheating!\n");
    else
        printf("Temperature normal.\n");
    return 0;
}
