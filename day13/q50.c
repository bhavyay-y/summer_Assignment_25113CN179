#include <stdio.h>

int main()
{
    int n, sum = 0;
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
        sum += a[i];
    }
    printf("sum and average of array is %d and %d", sum, sum / n);
    return 0;
}