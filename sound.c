#include <stdio.h>
int main()
 {
    int sound;
    printf("Enter sound level: ");
    scanf("%d", &sound);
    if(sound < 30)
     printf("Quiet Environment\n");
    else if(sound <= 70) 
    printf("Normal Sound Level\n");
    else 
    printf("High Noise Detected!\n");
    return 0;
}
