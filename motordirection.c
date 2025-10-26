#include <stdio.h>
int main()
 {
    int dir;
    printf("Enter direction (1=Forward, 2=Backward): ");
    scanf("%d", &dir);
    switch(dir)
     {
        case 1: printf("Motor running Forward\n"); break;
        case 2: printf("Motor running Backward\n"); break;
        default: printf("Invalid direction\n");
    }
    return 0;
}
