#include <stdio.h>

int prime(int a)
{
    if (a == 0 || a == 1)
        return 1;
    else
    {
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                return 1;
            }
            else
                continue;
        }
        return 0;
    }
}

int main()
{
    int n, b;
    printf("enter number");
    scanf("%d", &n);
    b = prime(n);
    if (b == 1)
        printf("not prime");
    else
        printf("prime");
    return 0;
}