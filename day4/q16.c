#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, j, d = 0, r, n = 0, k, l;
    printf("enter limits");
    scanf("%d %d", &n1, &n2);
    printf("armstrong numbers are:\n");
    if (n2 > n1)
    {
        for (int i = n1; i <= n2; i++)
        {
            j = k = l = i;
            n = d = 0;
            if (l <= 0)
                continue;
            else
            {
                while (l != 0)
                {
                    l = l / 10;
                    d++;
                }
                while (j != 0)
                {
                    r = j % 10;
                    n += pow(r, d);
                    j = j / 10;
                }
                if (n == k)
                {
                    printf("%d\n", k);
                }
            }
        }
    }
    else
    {
        for (int i = n2; i <= n1; i++)
        {
            j = k = l = i;
            if (l <= 0)
                continue;
            else
            {
                while (l != 0)
                {
                    l = l / 10;
                    d++;
                }
                while (j != 0)
                {
                    r = j % 10;
                    n += pow(r, d);
                    j = j / 10;
                }
                if (n == k)
                {
                    printf("%d\n", k);
                }
                else
                    continue;
            }
        }
    }
}