#include <stdio.h>
#include <math.h>

int main()
{
    int ch, f = 1, i;
    double n1, n2, ans = 0;

    printf("enter first number: ");
    scanf("%lf", &n1);

    while(1)
    {
        printf("\ncurrent answer = %.2f\n", n1);
        printf("\n1. addition");
        printf("\n2. subtraction");
        printf("\n3. multiplication");
        printf("\n4. division");
        printf("\n5. modulus");
        printf("\n6. power");
        printf("\n7. square");
        printf("\n8. square root");
        printf("\n9. factorial");
        printf("\n10. enter new number");
        printf("\n11. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("enter second number: ");
                scanf("%lf", &n2);
                ans = n1 + n2;
                printf("answer = %.2f\n", ans);
                n1 = ans;
                break;

            case 2:
                printf("enter second number: ");
                scanf("%lf", &n2);
                ans = n1 - n2;
                printf("answer = %.2f\n", ans);
                n1 = ans;
                break;

            case 3:
                printf("enter second number: ");
                scanf("%lf", &n2);
                ans = n1 * n2;
                printf("answer = %.2f\n", ans);
                n1 = ans;
                break;

            case 4:
                printf("enter second number: ");
                scanf("%lf", &n2);

                if(n2 == 0)
                {
                    printf("division by zero is not possible\n");
                }
                else
                {
                    ans = n1 / n2;
                    printf("answer = %.2f\n", ans);
                    n1 = ans;
                }

                break;

            case 5:
                printf("enter second number: ");
                scanf("%lf", &n2);

                if(n2 == 0)
                {
                    printf("modulus by zero is not possible\n");
                }
                else
                {
                    printf("answer = %d\n", (int)n1 % (int)n2);
                    n1 = (int)n1 % (int)n2;
                }

                break;

            case 6:
                printf("enter power: ");
                scanf("%lf", &n2);
                ans = pow(n1, n2);
                printf("answer = %.2f\n", ans);
                n1 = ans;
                break;

            case 7:
                ans = n1 * n1;
                printf("answer = %.2f\n", ans);
                n1 = ans;
                break;

            case 8:
                if(n1 < 0)
                {
                    printf("square root is not possible\n");
                }
                else
                {
                    ans = sqrt(n1);
                    printf("answer = %.2f\n", ans);
                    n1 = ans;
                }

                break;

            case 9:
                if(n1 < 0 || (int)n1 != n1)
                {
                    printf("factorial is not possible\n");
                }
                else
                {
                    f = 1;

                    for(i = 1; i <= (int)n1; i++)
                        f = f * i;

                    printf("answer = %d\n", f);
                    n1 = f;
                }

                break;

            case 10:
                printf("enter new number: ");
                scanf("%lf", &n1);
                break;

            case 11:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}