#include <stdio.h>
int main()
 {
    int score = 0, ans;
    printf("Q1. Capital of India?\n1. Delhi 2. Mumbai 3. Chennai\nAnswer: ");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("Q2. 2 + 2 * 2 = ?\n1. 6 2. 4 3. 8\nAnswer: ");
    scanf("%d", &ans);
    if (ans == 3) score++;

    printf("Q3. Largest planet?\n1. Earth 2. Jupiter 3. Mars\nAnswer: ");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("\nYour total score: %d/3", score);
    return 0;
}
