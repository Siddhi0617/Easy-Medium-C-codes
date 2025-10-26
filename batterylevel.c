#include <stdio.h>
int main() 
{
    int level;
    printf("Enter battery percentage: ");
    scanf("%d", &level);
    if(level > 80) 
    printf("Battery Full\n");
    else if(level > 40) 
    printf("Battery Medium\n");
    else
     printf("Battery Low\n");
    return 0;
}
