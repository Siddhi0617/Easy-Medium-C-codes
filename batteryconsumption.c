#include <stdio.h>
int main()
 {
    int time;
    printf("Enter operating time (hours): ");
    scanf("%d", &time);
    printf("Estimated battery used: %d%%\n", time * 10);
    return 0;
}
