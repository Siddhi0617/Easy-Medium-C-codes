#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int user, comp;
    printf("Enter choice: 1.Rock  2.Paper  3.Scissors: ");
    scanf("%d", &user);
    srand(time(0));
    comp = (rand() % 3) + 1;
    printf("Computer chose: %d\n", comp);
    if (user == comp)
        printf("It's a Draw!");
    else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
        printf("You Win!");
    else
        printf("You Lose!");
    return 0;
}
