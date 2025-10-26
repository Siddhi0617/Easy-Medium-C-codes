#include <stdio.h>
int main()
 {
    int mode;
    printf("1. Bluetooth\n2. WiFi\n3. Serial\nEnter mode: ");
    scanf("%d", &mode);
    switch(mode) 
    {
        case 1: printf("Bluetooth Enabled.\n"); break;
        case 2: printf("WiFi Connected.\n"); break;
        case 3: printf("Serial Mode Active.\n"); break;
        default: printf("Invalid Option.\n");
    }
    return 0;
}
