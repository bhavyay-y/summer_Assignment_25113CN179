#include <stdio.h>

int main(){
    int n, maxf=0, ei;
    printf("enter number of elements");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("invalid input");
        return 0;
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter number");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if (a[i]==a[j])
            {
                count+=1;
            }
        }
        if (count>maxf)
        {
            maxf=count;
            ei=i;
        }   
    }
    printf("maximum frequency element is %d with frequency %d", a[ei], maxf);
    return 0;
}