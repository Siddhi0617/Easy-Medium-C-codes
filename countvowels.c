#include <stdio.h>
int countVowels(char str[]) 
{
    int count = 0;
    for(int i=0; str[i]!='\0'; i++) 
    {
        char ch = str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            count++;
    }
    return count;
}

int main() 
{
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Vowels = %d\n", countVowels(word));
    return 0;
}
