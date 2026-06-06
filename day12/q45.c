#include <stdio.h>

int palindrome(int a, int r)
{
    if (a == 0)
        return 0;
    while (a != 0)
    {
        r *= 10;
        r += a % 10;
        a = a / 10;
    }
    return r;
}

int main()
{
    int n, n1, rev = 0;
    printf("enter number");
    scanf("%d", &n);
    n1 = palindrome(n, rev);
    if (n1 == n)
    {
        printf("number is palindrome");
    }
    else
        printf("number is not palindrome");
}