#include <stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    if (n == 0)
        printf("0 has an infinte number of factors");
    else if (n < 0)
    {
        printf("factors of %d are:", n);
        for (int i = n; i <= -n; i++)
        {
            if (i == 0)
                continue;
            else
            {
                if (n % i == 0)
                {
                    printf("\n%d", i);
                }
                else
                    continue;
            }
        }
    }
    else
    {
        printf("factors of %d are:", n);
        for (int i = -n; i <= n; i++)
        {
            if (i == 0)
                continue;
            else
            {
                if (n % i == 0)
                {
                    printf("\n%d", i);
                }
                else
                    continue;
            }
        }
    }
}