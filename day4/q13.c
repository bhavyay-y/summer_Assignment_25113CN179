#include <stdio.h>

int main()
{
    int a = 0, b = 1, t, n;
    printf("enter number of terms");
    scanf("%d", &n);
    printf("fibonacci series:\n%d", a);
    for (int i = 0; i < n; i++)
    {
        t = a + b;
        a = b;
        b = t;
        printf("\n%d", a);
    }
    return 0;
}
