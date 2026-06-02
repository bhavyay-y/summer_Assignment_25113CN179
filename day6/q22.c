#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, c = 0, p = 0;
    printf("enter binary number");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        c += r * pow(2, p);
        n = n / 10;
        p++;
    }
    printf("decimal equivalent is:%d", c);
    return 0;
}