#include <stdio.h>
#include <string.h>

struct product
{
    int id;
    char n[50];
    int q;
    double p;
};

int main()
{
    struct product pr;
    int ch, q;
    printf("enter product details\n");
    printf("enter product id: ");
    scanf("%d", &pr.id);
    getchar();
    printf("enter product name: ");
    fgets(pr.n, 50, stdin);
    pr.n[strcspn(pr.n, "\n")] = '\0';
    printf("enter quantity: ");
    scanf("%d", &pr.q);
    printf("enter price: ");
    scanf("%lf", &pr.p);

    while(1)
    {
        printf("\n1. display product");
        printf("\n2. add stock");
        printf("\n3. sell product");
        printf("\n4. update price");
        printf("\n5. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nproduct details\n");
                printf("product id = %d\n", pr.id);
                printf("product name = %s\n", pr.n);
                printf("quantity = %d\n", pr.q);
                printf("price = %.2f\n", pr.p);
                break;

            case 2:
                printf("enter quantity to add: ");
                scanf("%d", &q);

                if(q <= 0)
                {
                    printf("invalid quantity\n");
                }
                else
                {
                    pr.q = pr.q + q;
                    printf("stock updated\n");
                }

                break;

            case 3:
                printf("enter quantity to sell: ");
                scanf("%d", &q);

                if(q <= 0)
                {
                    printf("invalid quantity\n");
                }
                else if(q > pr.q)
                {
                    printf("insufficient stock\n");
                }
                else
                {
                    pr.q = pr.q - q;
                    printf("product sold\n");
                }

                break;

            case 4:
                printf("enter new price: ");
                scanf("%lf", &pr.p);

                if(pr.p <= 0)
                {
                    printf("invalid price\n");
                }
                else
                {
                    printf("price updated\n");
                }

                break;

            case 5:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}