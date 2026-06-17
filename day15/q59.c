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
    printf("rotated arrayb is:");
    printf("\n%d", a[n-1]);
    for (int i = 0; i < n-1; i++)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}