#include <stdio.h>
int main()
 {
    int load;
    printf("Enter load weight (kg): ");
    scanf("%d", &load);
    if(load <= 5)
    printf("Load within a limit\n");
    else 
    printf("Overload, Reduce weight\n");
    return 0;
}
