#include <stdio.h>
int main() 
{
    int level;
    printf("Enter battery percentage: ");
    scanf("%d", &level);
    if(level > 80) printf("Battery: Excellent\n");
    else if(level >= 50) printf("Battery: Good\n");
    else if(level >= 20) printf("Battery: Low\n");
    else printf("Battery: Critical\n");
    return 0;
}
