#include <stdio.h>

int main()
{
    int a[100], n, ch, i, p, e, f = 0;
    int max, min, sum = 0;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while(1)
    {
        printf("\n1. display array");
        printf("\n2. search element");
        printf("\n3. update element");
        printf("\n4. delete element");
        printf("\n5. find maximum");
        printf("\n6. find minimum");
        printf("\n7. find sum");
        printf("\n8. find average");
        printf("\n9. sort array");
        printf("\n10. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("array = ");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;

            case 2:
                printf("enter element to search: ");
                scanf("%d", &e);

                f = 0;

                for(i = 0; i < n; i++)
                {
                    if(a[i] == e)
                    {
                        printf("element found at index %d\n", i);
                        f = 1;
                        break;
                    }
                }

                if(f == 0)
                    printf("element not found\n");

                break;

            case 3:
                printf("enter index: ");
                scanf("%d", &p);

                if(p >= 0 && p < n)
                {
                    printf("enter new element: ");
                    scanf("%d", &a[p]);
                    printf("element updated\n");
                }
                else
                {
                    printf("invalid index\n");
                }

                break;

            case 4:
                printf("enter index to delete: ");
                scanf("%d", &p);

                if(p >= 0 && p < n)
                {
                    for(i = p; i < n - 1; i++)
                        a[i] = a[i + 1];

                    n--;

                    printf("element deleted\n");
                }
                else
                {
                    printf("invalid index\n");
                }

                break;

            case 5:
                max = a[0];

                for(i = 1; i < n; i++)
                    if(a[i] > max)
                        max = a[i];

                printf("maximum = %d\n", max);
                break;

            case 6:
                min = a[0];

                for(i = 1; i < n; i++)
                    if(a[i] < min)
                        min = a[i];

                printf("minimum = %d\n", min);
                break;

            case 7:
                sum = 0;

                for(i = 0; i < n; i++)
                    sum += a[i];

                printf("sum = %d\n", sum);
                break;

            case 8:
                sum = 0;

                for(i = 0; i < n; i++)
                    sum += a[i];

                printf("average = %.2f\n", (float)sum / n);
                break;

            case 9:
                for(i = 0; i < n - 1; i++)
                {
                    for(int j = 0; j < n - 1 - i; j++)
                    {
                        if(a[j] > a[j + 1])
                        {
                            int t = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = t;
                        }
                    }
                }

                printf("array sorted\n");
                break;

            case 10:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }

    return 0;
}