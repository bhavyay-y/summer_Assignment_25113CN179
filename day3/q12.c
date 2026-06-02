#include <stdio.h>

int main()
{
    int n1, n2, gcd = 1;
    printf("enter two numbers");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        for (int i = 1; i <= n1; i++)
        {
            if (n2 % i == 0 && n1 % i == 0)
            {
                gcd = i;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                gcd = i;
            }
        }
    }
    printf("gcd of %d and %d is %d", n1, n2, gcd);
    return 0;
}