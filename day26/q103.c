#include <stdio.h>

int main()
{
    int ch;
    float bal = 10000, amt;

    while(1)
    {
        printf("\n1. check balance");
        printf("\n2. deposit");
        printf("\n3. withdraw");
        printf("\n4. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("balance = %.2f\n", bal);
                break;

            case 2:
                printf("enter amount to deposit: ");
                scanf("%f", &amt);

                bal = bal + amt;
                printf("amount deposited successfully\n");
                printf("balance = %.2f\n", bal);
                break;

            case 3:
                printf("enter amount to withdraw: ");
                scanf("%f", &amt);

                if(amt <= bal)
                {
                    bal = bal - amt;
                    printf("please collect your cash\n");
                    printf("balance = %.2f\n", bal);
                }
                else
                {
                    printf("insufficient balance\n");
                }
                break;

            case 4:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}