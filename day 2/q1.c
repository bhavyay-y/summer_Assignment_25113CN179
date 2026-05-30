#include <stdio.h>

int main()
{
    int n, n1, sum = 0, r;
    printf("enter number");
    scanf("%d", &n);
    n1 = n;
    if (n == 0)
    {
        sum = 0;
    }
    else
    {
        if (n < 0)
            n = -n;
        while (n != 0)
        {
            r = n % 10;
            sum += r;
            n = n / 10;
        }
    }
    printf("sum of digits of %d is %d", n1, sum);
    return 0;
}