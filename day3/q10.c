#include <stdio.h>

int main()
{
    int n2, n1, rev = 0, r, c = 0;
    printf("enter numbers");
    scanf("%d %d", &n1, &n2);
    if (n2 > n1)
    {
        for (int j = n1; j <= n2; j++)
        {
            if (j <= 1)
                c = 1;
            else
            {
                for (int i = 2; i < (j / 2) + 1; i++)
                {
                    if (j % i == 0)
                    {
                        c = 1;
                        break;
                    }
                    else
                        continue;
                }
            }
            if (c == 0)
            {
                printf("%d\n", j);
            }
            c = 0;
        }
    }
    else
    {
        for (int j = n2; j <= n1; j++)
        {
            if (j <= 1)
                c = 1;
            else
            {
                for (int i = 2; i < (j / 2) + 1; i++)
                {
                    if (j % i == 0)
                    {
                        c = 1;
                        break;
                    }
                    else
                        continue;
                }
            }
            if (c == 0)
            {
                printf("%d\n", j);
            }
            c = 0;
        }
    }
}