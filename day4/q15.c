#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, n1, n2 = 0, n3, d = 0;
    printf("enter number:");
    scanf("%d", &n);
    n1 = n3 = n;
    if (n <= 0)
        printf("invalid input");
    else
    {
        while (n != 0)
        {
            n = n / 10;
            d++;
        }
        while (n1 != 0)
        {
            r = n1 % 10;
            n2 += pow(r, d);
            n1 = n1 / 10;
        }
    }
    if (n3 == n2)
        printf("%d is armstrong number", n3);
    else
        printf("%d is not armstrong number", n3);
    return 0;
}