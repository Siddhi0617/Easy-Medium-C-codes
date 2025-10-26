#include <stdio.h>
int main()
 {
    float v;
    printf("Enter voltage: ");
    scanf("%f", &v);
    if(v < 3.3)
        printf("Low Voltage - Recharge Needed.\n");
    else if(v <= 4.2)
        printf("Voltage Normal.\n");
    else
        printf("Warning: Over Voltage!\n");
    return 0;
}
