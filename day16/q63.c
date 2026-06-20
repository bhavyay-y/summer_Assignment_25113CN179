#include <stdio.h>

int main(){
    int n, tsum;
    printf("enter number of terms");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d", &a[i]);
    }
    printf("enter sum");
    scanf("%d", &tsum);
    printf("pair with given sum are");
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]+a[j]==tsum)
            {
                printf("\n(%d, %d)", a[i], a[j]);
            }  
        }  
    }
    return 0;
}