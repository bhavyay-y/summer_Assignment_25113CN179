#include <stdio.h>

int main(){
    int n,m;
    printf("enter number of elements in 1st array");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d", &a[i]);
    }
    printf("enter number of elements in 2nd array");
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        printf("enter element");
        scanf("%d", &b[i]);
    }
    int c[n+m];
    for (int i = 0; i < n+m; i++)
    {
        if (i<n)
        {
            c[i]=a[i];
        }
        else
            c[i]=b[i-n];
    }
    printf("merged array:");
    for (int i = 0; i < n+m; i++)
    {
        printf("\n%d", c[i]);
    }
    return 0;
}