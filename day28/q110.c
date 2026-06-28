#include <stdio.h>
#include <string.h>

struct account
{
    int ac;
    char n[50];
    double bal;
};

int main()
{
    struct account a;
    int ch;
    double amt;
    printf("enter account details\n");
    printf("enter account number: ");
    scanf("%d", &a.ac);
    getchar();
    printf("enter account holder name: ");
    fgets(a.n, 50, stdin);
    a.n[strcspn(a.n, "\n")] = '\0';
    printf("enter initial balance: ");
    scanf("%lf", &a.bal);

    while(1)
    {
        printf("\n1. display account details");
        printf("\n2. deposit");
        printf("\n3. withdraw");
        printf("\n4. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\naccount details\n");
                printf("account number = %d\n", a.ac);
                printf("account holder = %s\n", a.n);
                printf("balance = %.2f\n", a.bal);
                break;

            case 2:
                printf("enter amount to deposit: ");
                scanf("%lf", &amt);

                a.bal = a.bal + amt;

                printf("amount deposited successfully\n");
                break;

            case 3:
                printf("enter amount to withdraw: ");
                scanf("%lf", &amt);

                if(amt <= a.bal)
                {
                    a.bal = a.bal - amt;
                    printf("amount withdrawn successfully\n");
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