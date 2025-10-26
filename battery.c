#include <stdio.h>
int main()
 {
    int battery;
    printf("Enter battery level (0–100): ");
    scanf("%d", &battery);
    if(battery < 20)
        printf("Start Charging.\n");
    else if(battery < 80)
        printf("Battery Okay.\n");
    else
        printf("Stop Charging.\n");
    return 0;
}
