#include <stdio.h>

int main(){
    int n,c=0;
    printf("enter number of terms of array");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0)
        {
            int t;
            t=a[c];
            a[c]=a[i];
            a[i]=t;
            c++;
        }
    }
    printf("new array:");
    for (int i = 0; i <n; i++)
    {
        printf("\n%d", a[i]);
    }
   return 0;
}