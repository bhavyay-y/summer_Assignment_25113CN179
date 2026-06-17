#include <stdio.h>

int main(){
    int n;
    printf("enter number of terms of array");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d", &a[i]);
    }
    printf("reversed array:\n");
    for (int i = n-1; i >=0 ; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}