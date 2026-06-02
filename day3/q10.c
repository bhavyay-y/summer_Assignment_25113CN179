#include <stdio.h>

int main()
{
    int n2, n1, rev = 0, r, c = 0, t;
    printf("enter lower and upper limits");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        t = n1;
        n1 = n2;
        n2 = t;
    }
    for (int j = n1; j <= n2; j++)
    {
        if (j <= 1)
            c = 1;
        else
        {
            for (int i = 2; i * i <= j; i++)
            {
                if (j % i == 0)
                {
                    c = 1;
                    break;
                }
                else
                    continue;
            }
        }
        if (c == 0)
        {
            printf("%d\n", j);
        }
        c = 0;
    }
}