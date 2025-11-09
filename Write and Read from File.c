#include <stdio.h>
int main() 
{
    FILE *fp;
    char text[100];
    fp = fopen("sample.txt", "w");
    printf("Enter text to store: ");
    gets(text);
    fprintf(fp, "%s", text);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    printf("\nFile contents:\n");
    while (fgets(text, sizeof(text), fp))
        printf("%s", text);
    fclose(fp);
    return 0;
}
