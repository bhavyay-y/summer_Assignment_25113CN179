#include <stdio.h>

int main()
{
    int n;
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
    printf("elements of array are:");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}