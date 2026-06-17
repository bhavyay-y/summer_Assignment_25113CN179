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
    for (int i = 1; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    printf("\n%d", a[0]);
    return 0;
}