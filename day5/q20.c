#include <stdio.h>
#include <math.h>

int prime_num(int num)
{
    if (num == 1)
        return 0;
    else
    {
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                return 0;
            }
            else
                continue;
        }
        return 1;
    }
}

int main()
{
    int n, n1, a = -1;
    printf("enter number");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("can't be determined");
    }
    else
    {
        if (n < 0)
            n = -n;
        for (int i = 1; i <= n; i++)
        {
            n1 = prime_num(i);
            if (n % i == 0 && n1 == 1)
                a = i;
        }
    }
    if (a == -1)
        printf("no prime factors found");
    else
        printf("largest prime factor is %d", a);
    return 0;
}
