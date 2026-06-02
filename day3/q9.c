#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("enter number");
    scanf("%d", &n);
    if (n <= 1)
    {
        c = 1;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
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
        printf("%d is prime", n);
    }
    else
        printf("%d is not prime", n);
}