#include <stdio.h>
int main()
 {
    int light;
    printf("Enter light intensity (0–1000): ");
    scanf("%d", &light);
    if(light < 200) printf("Dark Environment\n");
    else if(light < 700) printf("Normal Light\n");
    else printf("Bright Light\n");
    return 0;
}
