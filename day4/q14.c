#include <stdio.h>

int main()
{
    int a = 0, b = 1, t, n;
    printf("enter the term of series you want to find");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        t = a + b;
        a = b;
        b = t;
    }
    printf("the term is:\n%d", a);
    return 0;
}