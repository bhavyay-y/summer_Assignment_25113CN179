#include <stdio.h>

int main(){
    int n, m;
    int a[10][10];
    printf("enter number of rows in matrix a\n");
    scanf("%d", &n);
    printf("enter number of columnsin matrix a\n");
    scanf("%d", &m);
    printf("enter elemnts of matrix a\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter element at position [a%d%d]\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < m; j++)
        {
            sum+=a[i][j];
        }
        printf("sum of row %d is %d\n", i+1, sum);
    }
    return 0;
}