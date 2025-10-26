#include <stdio.h>
int main()
 {
    int sensor;
    printf("Enter sensor status (1=OK, 0=FAIL): ");
    scanf("%d", &sensor);
    if(sensor == 1) 
    printf("Sensor working fine\n");
    else 
    printf("Sensor error detected!\n");
    return 0;
}
