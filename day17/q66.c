#include <stdio.h>

int main(){
    int n, m;
    printf("enter number of elements in 1st and 2nd array");
    scanf("%d %d", &n,&m);
    if (n<m){
        int c=n;
        n=m;
        m=c;
    }
    int a[n], b[m];
    printf("enter element of 1st array");
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d", &a[i]);
    }
    printf("enter element of 2nd array");
    for (int i = 0; i < m; i++)
    {
        printf("enter element");
        scanf("%d", &b[i]);
    }
    int c[m], count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i]!=a[i])
                c[i]=b[i];
            else
                count++;
        }
    }
    int unn[n+m-count];
    for (int i = 0; i < n+m-count; i++)
    {
        if (i<n)
        {
            unn[i]=a[i];
        }
        else
        {
            unn[i]=c[i-n];
        }
    }
    printf("union of arrays is:");
    for (int i = 0; i < n+m-count; i++)
    {
        printf("\n%d", unn[i]);
    }
    return 0; 
}
    