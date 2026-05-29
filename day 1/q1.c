#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("enter natural number(N):");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("enter natural number");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
    }
    printf("sum of first n %d", sum);
}