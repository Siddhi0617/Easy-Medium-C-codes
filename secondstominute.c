#include <stdio.h>
float toMinutes(int sec)
 {
    return sec / 60.0;
}
int main() 
{
    int sec;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    printf("Time in minutes = %.2f\n", toMinutes(sec));
    return 0;
}
