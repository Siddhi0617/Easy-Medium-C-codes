#include <stdio.h>
int main()
 {
    int line;
    printf("Line Detected? (1=Yes, 0=No): ");
    scanf("%d", &line);
    if(line == 1) 
    printf("Following the line...\n");
    else 
    printf("Searching for line...\n");
    return 0;
}
