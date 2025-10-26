#include <stdio.h>
int main()
 {
    int lock;
    printf("Enter 1 to Lock, 0 to Unlock: ");
    scanf("%d", &lock);
    if(lock)
        printf("System Locked.\n");
    else
        printf("System Unlocked.\n");
    return 0;
}
