#include <stdio.h>

int main(){
    int n, m;
    int a[10][10], b[10][10];
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
        for (int j = 0; j < m; j++)
        {
            if(i==j)
                b[i][j]=a[i][j];
            else
                b[i][j]=a[j][i];
        }
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j]!=a[i][j]){
                c=1;
                break;
            }
        }
    }
    if (c==0)
        printf("matrix is symmetric");
    else
        printf("matrix is not symmetric");
    return 0;
}