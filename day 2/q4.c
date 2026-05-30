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
    if (rev == n1)
        printf("%d is palindrome", n1);
    else
        printf("%d is not palindrome", n1);
    return 0;
}