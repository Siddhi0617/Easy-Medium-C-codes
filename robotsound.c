#include <stdio.h>
int main() 
{
    int mode;
    printf("Select Sound Mode:\n1. Silent\n2. Beep\n3. Alert\nEnter: ");
    scanf("%d", &mode);
    switch(mode)
     {
        case 1: printf("Silent Mode Activated.\n"); break;
        case 2: printf("Beeping...\n"); break;
        case 3: printf("High Alert Sound!\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
