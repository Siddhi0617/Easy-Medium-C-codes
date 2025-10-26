#include <stdio.h>

int main() {
    int totalMinutes, hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    hours = totalMinutes / 60;        
    minutes = totalMinutes % 60;      

    printf("%d minutes = %d hours and %d minutes\n", totalMinutes, hours, minutes);

    return 0;
}
