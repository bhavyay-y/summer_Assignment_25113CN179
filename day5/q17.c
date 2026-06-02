#include <stdio.h>

int main()
{
    int n, sn = 0;
    printf("enter number");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        if (n % i == 0)
        {
            sn += i;
        }
        else
            continue;
    }
    if (sn == n)
        printf("%d is perfect number", n);
    else
        printf("%d is not perfect number", n);
}