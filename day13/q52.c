#include <stdio.h>

int main()
{
    int n, co = 0, ce = 0;
    printf("enter number of elements");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int b;
        printf("enter element");
        scanf("%d", &b);
        a[i] = b;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            ce++;
        else
            co++;
    }
    printf("number of odd and even in array are %d and %d", co, ce);
    return 0;
}