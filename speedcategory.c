#include <stdio.h>
int main() 
{
    int speed;
    printf("Enter robot speed: ");
    scanf("%d",&speed);
    if(speed<20) printf("Slow\n");
    else if(speed<50) printf("Medium\n");
    else printf("Fast\n");
    return 0;
}
