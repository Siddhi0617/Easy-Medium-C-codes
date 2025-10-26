#include <stdio.h>
int main() 
{
    int charging;
    printf("Is robot charging? (1=Yes, 0=No): ");
    scanf("%d", &charging);
    if(charging) printf("Robot is Charging\n");
    else printf("Robot Running on Battery\n");
    return 0;
}
