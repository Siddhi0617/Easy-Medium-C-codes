#include <stdio.h>
int main()
 {
    int path;
    printf("1. Clear Path\n2. Obstacle Ahead\nEnter condition: ");
    scanf("%d", &path);
    if(path == 1)
     printf("Proceed Forward\n");
    else
     printf("Stop and Recalculate Path\n");
    return 0;
}
