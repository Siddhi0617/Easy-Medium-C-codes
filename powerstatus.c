#include <stdio.h>
int main() 
{
    int supply;
    printf("Enter power status (1=Connected, 0=Disconnected): ");
    scanf("%d", &supply);
    if(supply)
        printf("Power Connected.\n");
    else
        printf("Power Disconnected!\n");
    return 0;
}
