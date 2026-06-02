#include <stdio.h>

int main()
{
    int n, n1, r, nf = 0, fact = 1;
    printf("enter number");
    scanf("%d", &n);
    n1 = n;
    if (n < 0)
    {
        printf("invalid input");
    }
    else if (n == 0)
    {
        printf("not a strong number");
    }
    else
    {
        while (n != 0)
        {
            r = n % 10;
            for (int i = 1; i <= r; i++)
            {
                fact *= i;
            }
            nf += fact;
            n = n / 10;
            fact = 1;
        }
        if (nf == n1)
            printf("%d is strong number", n1);
        else
            printf("%d is not a strong number", n1);
    }
}