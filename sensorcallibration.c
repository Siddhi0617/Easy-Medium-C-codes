#include <stdio.h>
int main() 
{
    int status;
    printf("Start calibration? (1=Yes, 0=No): ");
    scanf("%d", &status);
    if(status)
        printf("Calibrating Sensors\n");
    else
        printf("Calibration Skipped\n");
    return 0;
}
