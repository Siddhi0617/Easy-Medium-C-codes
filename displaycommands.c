#include <stdio.h>
int main() 
{
    char commands[4][20] = {"Start", "Stop", "Left", "Right"};
    for(int i=0; i<4; i++)
        printf("Command %d: %s\n", i+1, commands[i]);
    return 0;
}
