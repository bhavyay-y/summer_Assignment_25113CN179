#include <stdio.h>

int main(){
    int n, c=0, c1=0, c2=0;
    printf("enter number of terms");
    scanf("%d", &n);
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        printf("enter element");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
        }
        if(c==0){
            b[c1]=a[i];
            c1++;
        }
        c=0;
    }
    printf("new array");
    for (int i = 0; i < c1; i++)
    {
        printf("\n%d", b[i]);
    }
    return 0;
}