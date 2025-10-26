#include <stdio.h>
int main()
 {
    float t1, t2;
    printf("Enter sensor1 temperature: ");
    scanf("%f", &t1);
    printf("Enter sensor2 temperature: ");
    scanf("%f", &t2);
    if(t1 > t2)
        printf("Sensor1 is hotter.\n");
    else if(t1 < t2)
        printf("Sensor2 is hotter.\n");
    else
        printf("Both sensors show same temperature.\n");
    return 0;
}
