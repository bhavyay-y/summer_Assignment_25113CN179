#include <stdio.h>

int main()
{
    int n1, n2, lcm, c = 0;
    printf("enter two numbers");
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        for (int i = 1; i <= n1 && c == 0; i++)
        {
            for (int j = 1; j <= n2; j++)
            {
                if (n2 * i == n1 * j)
                {
                    lcm = n2 * i;
                    c = 1;
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = 1; i <= n2 && c == 0; i++)
        {
            for (int j = 1; j <= n1; j++)
            {
                if (n1 * i == n2 * j)
                {
                    lcm = n1 * i;
                    c = 1;
                    break;
                }
            }
        }
    }
    printf("%d", lcm);
    return 0;
}