#include <stdio.h>
int main() 
{
    char tasks[3][20] = {"Cleaning", "Mapping", "Charging"};
    for(int i=0; i<3; i++)
        printf("Task %d: %s\n", i+1, tasks[i]);
    return 0;
}
