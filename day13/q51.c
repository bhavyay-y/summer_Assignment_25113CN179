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
    int min = a[0], max = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("maximum and minimum element of array are %d and %d", max, min);
    return 0;
}