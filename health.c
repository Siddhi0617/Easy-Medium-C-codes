#include <stdio.h>
int main() 
{
    int sensor, motor;
    printf("Enter sensor status (1=OK, 0=FAIL): ");
    scanf("%d", &sensor);
    printf("Enter motor status (1=OK, 0=FAIL): ");
    scanf("%d", &motor);
    if(sensor && motor)
    printf("Robot Health: GOOD\n");
    else
        printf("Robot Health: NEED MAINTENANCE\n");
    return 0;
}
