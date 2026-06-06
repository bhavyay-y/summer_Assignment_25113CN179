#include <stdio.h>

int pnum(int a)
{
    int sum;
    for (int i = 1; i <= a / 2 + 1; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n, s;
    printf("enter number");
    scanf("%d", &n);
    s = pnum(n);
    if (s == n)
        printf("perfect number");
    else
        printf("not a perfect number");
    return 0;
}