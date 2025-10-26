#include <stdio.h>
int main() 
{
    int s;
    printf("Enter signal strength (0–100): ");
    scanf("%d", &s);
    if(s < 30)
        printf("Weak Signal\n");
    else if(s <= 70)
        printf("Moderate Signal\n");
    else
        printf("Strong Signal\n");
    return 0;
}
