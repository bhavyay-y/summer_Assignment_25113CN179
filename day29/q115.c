#include <stdio.h>

int main()
{
    int a[100], n, ch, i, j, t;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while(1)
    {
        printf("\n1. display array");
        printf("\n2. bubble sort");
        printf("\n3. selection sort");
        printf("\n4. insertion sort");
        printf("\n5. exit");
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
                for(i = 0; i < n - 1; i++)
                {
                    for(j = 0; j < n - 1 - i; j++)
                    {
                        if(a[j] > a[j + 1])
                        {
                            t = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = t;
                        }
                    }
                }

                printf("bubble sort completed\n");
                break;

            case 3:
                for(i = 0; i < n - 1; i++)
                {
                    int m = i;

                    for(j = i + 1; j < n; j++)
                    {
                        if(a[j] < a[m])
                            m = j;
                    }

                    t = a[i];
                    a[i] = a[m];
                    a[m] = t;
                }

                printf("selection sort completed\n");
                break;

            case 4:
                for(i = 1; i < n; i++)
                {
                    t = a[i];
                    j = i - 1;

                    while(j >= 0 && a[j] > t)
                    {
                        a[j + 1] = a[j];
                        j--;
                    }

                    a[j + 1] = t;
                }

                printf("insertion sort completed\n");
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