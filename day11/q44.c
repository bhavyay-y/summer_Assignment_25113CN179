#include <stdio.h>

int fact(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    else
    {
        for (int i = 1; i <= a; i++)
        {
            b *= i;
        }
        return b;
    }
}

int main()
{
    int n, f = 1;
    printf("enter number");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, fact(n, f));
    return 0;
}