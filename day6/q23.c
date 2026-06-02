#include <stdio.h>

int main()
{
    int n, a, i = 0, c = 0;
    int bn[100];
    printf("enter number");
    scanf("%d", &n);
    if (n == 0)
    {
        bn[i] = 0;
    }

    else
    {
        while (n != 0)
        {
            a = n % 2;
            bn[i] = a;
            n = n / 2;
            i++;
        }
    }
    for (int j = i - 1; j >= 0; j--)
    {
        if (bn[j] == 1)
        {
            c += 1;
        }
    }
    printf("number of set bits:%d", c);
}