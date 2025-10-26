#include <stdio.h>
int main()
 {
    int grip;
    printf("1. Open Gripper\n2. Close Gripper\nEnter command: ");
    scanf("%d", &grip);
    switch(grip)
     {
        case 1: printf("Gripper Opened\n"); break;
        case 2: printf("Gripper Closed\n"); break;
        default: printf("Invalid Gripper Command.\n");
    }
    return 0;
}
