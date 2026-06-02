#include <stdio.h>

int main()
{
    int x, n, r = 1;
    printf("enter base number(x) and power(n):");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        r *= x;
    }
    printf("%d^%d=%d", x, n, r);
    return 0;
}