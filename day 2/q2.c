#include <stdio.h>

int main()
{
    int n, n1, rev = 0, r;
    printf("enter number");
    scanf("%d", &n);
    n1 = n;
    if (n == 0)
    {
        rev = 0;
    }
    while (n != 0)
    {
        r = n % 10;
        rev += r;
        n = n / 10;
        if (n != 0)
        {
            rev *= 10;
        }
    }

    printf("sum of digits of %d is %d", n1, rev);
    return 0;
}