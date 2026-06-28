#include <stdio.h>
#include <string.h>

struct ticket
{
    char e[50];
    int ts;
    int bs;
};

int main()
{
    struct ticket t;
    int ch, n;
    printf("enter event name: ");
    fgets(t.e, 50, stdin);
    t.e[strcspn(t.e, "\n")] = '\0';
    printf("enter total seats: ");
    scanf("%d", &t.ts);
    t.bs = 0;

    while(1)
    {
        printf("\n1. display details");
        printf("\n2. book ticket");
        printf("\n3. cancel ticket");
        printf("\n4. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nevent = %s\n", t.e);
                printf("total seats = %d\n", t.ts);
                printf("booked seats = %d\n", t.bs);
                printf("available seats = %d\n", t.ts - t.bs);
                break;

            case 2:
                printf("enter number of tickets: ");
                scanf("%d", &n);

                if(n <= 0)
                {
                    printf("invalid number of tickets\n");
                }
                else if(n > t.ts - t.bs)
                {
                    printf("tickets not available\n");
                }
                else
                {
                    t.bs = t.bs + n;
                    printf("ticket booked successfully\n");
                }

                break;

            case 3:
                printf("enter number of tickets to cancel: ");
                scanf("%d", &n);

                if(n <= 0)
                {
                    printf("invalid number of tickets\n");
                }
                else if(n > t.bs)
                {
                    printf("you cannot cancel more tickets than booked\n");
                }
                else
                {
                    t.bs = t.bs - n;
                    printf("ticket cancelled successfully\n");
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