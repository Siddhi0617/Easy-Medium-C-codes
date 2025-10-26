#include <stdio.h>
int main()
 {
    float v1, v2;
    printf("Enter motor1 speed: ");
    scanf("%f", &v1);
    printf("Enter motor2 speed: ");
    scanf("%f", &v2);
    if(v1 > v2)
        printf("Motor1 faster.\n");
    else if(v1 < v2)
        printf("Motor2 faster.\n");
    else
        printf("Both motors same speed.\n");
    return 0;
}
