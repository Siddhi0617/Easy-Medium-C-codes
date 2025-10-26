#include <stdio.h>
int main() 
{
    int rpm;
    printf("Enter motor speed (RPM): ");
    scanf("%d", &rpm);
    if(rpm < 500)
        printf("Low Speed\n");
    else if(rpm <= 1500)
        printf("Normal Speed\n");
    else
        printf("Over Speed Warning\n");
    return 0;
}
