#include <stdio.h>

int main() 
{
    int i, j;
    
    for (i = 1; i <= 4; i++) 
    {         
        for (char ch = 'A'; ch <= 'G'; ch++) 
        { 
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}