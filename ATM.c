#include <stdio.h>
int main() 
{
    int balance=1000, choice, amount;
    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter amount: "); scanf("%d",&amount);
            balance+=amount; break;
        case 2:
            printf("Enter amount: "); scanf("%d",&amount);
            if(amount<=balance) balance-=amount;
            else printf("Insufficient funds\n");
            break;
        case 3:
            printf("Balance=%d",balance); break;
        default:
            printf("Invalid choice");
    }
    printf("\nFinal Balance=%d",balance);
    return 0;
}
