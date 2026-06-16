#include <stdio.h>

int main(){
    int n, a, max, max2;
    printf("enter numberb of elemnts");
    scanf("%d", &n);
    if (n==0||n==1)
    {
        printf("invaliod input");
    }
    else{
        int b[n];
        for (int i = 0; i < n; i++)
        {
            int c;
            printf("enter element");
            scanf("%d", &c);
            b[i]=c;
        }
        max=b[0];
        max2=b[0];
        for (int i = 0; i < n; i++)
        {
            if (b[i]>max)
            {
                max=b[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i]>max2&&max>max2&&b[i]!=max)
            {
                max2=b[i];
            }
        
        }
        printf("second largest element is %d\n", max2);
    }
    return 0;
}