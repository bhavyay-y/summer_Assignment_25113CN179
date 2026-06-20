#include <stdio.h>

int main(){
    int n, asum=0;
    printf("enter number of terms");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d",&a[i]);
        asum+=a[i];
    }
    n=n+1;
    int expsum=n*(n+1)/2;
    printf("missing term is %d", expsum-asum);
    return 0;
}