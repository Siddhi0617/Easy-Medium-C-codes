#include <stdio.h>

int countWords(char str[])
 {
    int count = 1;
    for(int i=0; str[i]!='\0'; i++)
        if(str[i]==' ')
            count++;
    return count;
}

int main() 
{
    char line[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", line);
    printf("Number of words = %d\n", countWords(line));
    return 0;
}
