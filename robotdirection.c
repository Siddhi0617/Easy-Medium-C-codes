#include <stdio.h>
int main() 
{
    int d;
    printf("1. North\n2. South\n3. East\n4. West\nEnter direction: ");
    scanf("%d", &d);
    switch(d) 
    {
        case 1: printf("Moving North\n"); break;
        case 2: printf("Moving South\n"); break;
        case 3: printf("Moving East\n"); break;
        case 4: printf("Moving West\n"); break;
        default: printf("Invalid Direction\n");
    }
    return 0;
}
