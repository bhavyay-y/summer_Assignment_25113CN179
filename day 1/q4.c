#include <stdio.h>

int main()
{
    int n, d = 0, n1;
    printf("enter number");
    scanf("%d", &n);
    n1 = n;
    if (n == 0)
    {
        d = 1;
    }
    else
    {
        while (n != 0)
        {
            if (n < 0)
                n = -n;
            else
            {
                n = n / 10;
                d++;
            }
        }
    }
    printf("number of digits in %d is %d", n1, d);
    return 0;
}