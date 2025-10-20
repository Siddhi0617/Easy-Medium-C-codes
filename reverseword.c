#include <stdio.h>
#include <string.h>

void reverse(char str[])
 {
    int len = strlen(str);
    printf("Reversed: ");
    for(int i=len-1; i>=0; i--)
        printf("%c", str[i]);
    printf("\n");
}

int main()
 {
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);
    reverse(word);
    return 0;
}
