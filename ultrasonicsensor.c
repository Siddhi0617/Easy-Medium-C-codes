#include <stdio.h>
int main() 
{
    int range;
    printf("Enter detected range (cm): ");
    scanf("%d", &range);
    if(range <= 10)
        printf("Object too close.\n");
    else if(range <= 50)
        printf("Medium Distance.\n");
    else
        printf("Far Range Detected.\n");
    return 0;
}
