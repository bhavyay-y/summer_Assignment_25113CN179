#include <stdio.h>
#include <string.h>

struct contact
{
    char n[50];
    char p[20];
    char e[50];
};

int main()
{
    struct contact c;
    int ch;
    printf("enter contact details\n");
    printf("enter name: ");
    fgets(c.n, 50, stdin);
    c.n[strcspn(c.n, "\n")] = '\0';
    printf("enter phone number: ");
    fgets(c.p, 20, stdin);
    c.p[strcspn(c.p, "\n")] = '\0';
    printf("enter email: ");
    fgets(c.e, 50, stdin);
    c.e[strcspn(c.e, "\n")] = '\0';

    while(1)
    {
        printf("\n1. display contact");
        printf("\n2. update phone number");
        printf("\n3. update email");
        printf("\n4. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);
        getchar();

        switch(ch)
        {
            case 1:
                printf("\ncontact details\n");
                printf("name = %s\n", c.n);
                printf("phone number = %s\n", c.p);
                printf("email = %s\n", c.e);
                break;

            case 2:
                printf("enter new phone number: ");
                fgets(c.p, 20, stdin);
                c.p[strcspn(c.p, "\n")] = '\0';

                if(strlen(c.p) == 0)
                    printf("phone number cannot be empty\n");
                else
                    printf("phone number updated\n");

                break;

            case 3:
                printf("enter new email: ");
                fgets(c.e, 50, stdin);
                c.e[strcspn(c.e, "\n")] = '\0';

                if(strlen(c.e) == 0)
                    printf("email cannot be empty\n");
                else
                    printf("email updated\n");

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