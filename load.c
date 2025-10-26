#include <stdio.h>
int main()
 {
    float w;
    printf("Enter load weight (kg): ");
    scanf("%f", &w);
    if(w < 2)
        printf("Light Load.\n");
    else if(w <= 5)
        printf("Medium Load.\n");
    else
        printf("Heavy Load Detected!\n");
    return 0;
}
