#include <stdio.h>
int main()
 {
    char dir;
    printf("Enter direction (F=Forward, B=Backward, L=Left, R=Right): ");
    scanf(" %c", &dir);

    switch(dir) 
    {
        case 'F': printf("Robot Moving Forward\n"); break;
        case 'B': printf("Robot Moving Backward\n"); break;
        case 'L': printf("Turning Left\n"); break;
        case 'R': printf("Turning Right\n"); break;
        default: printf("Invalid Direction\n");
    }
    return 0;
}
