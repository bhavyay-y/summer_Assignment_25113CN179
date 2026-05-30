#include <stdio.h>

int main()
{
    int n, n1, pr = 1, r;
    printf("enter number");
    scanf("%d", &n);
    n1 = n;
    if (n == 0)
    {
        pr = 0;
    }
    else
    {
        if (n < 0)
            n = -n;
        while (n != 0)
        {
            r = n % 10;
            pr *= r;
            n = n / 10;
        }
    }
    printf("product of digits of %d is %d", n1, pr);
    return 0;
}