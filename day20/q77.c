#include <stdio.h>

int main(){
    int n, m;
    int a[10][10], b[10][10], c[10][10];
    printf("enter number of rows in matrix a\n");
    scanf("%d", &n);
    printf("enter number of columnsin matrix a\n");
    scanf("%d", &m);
    int x, y;
    printf("enter number of rows in matrix b\n");
    scanf("%d", &x);
    printf("enter number of columnsin matrix b\n");
    scanf("%d", &y);
    if (m!=x)
    {
        printf("invalid input number of colums of matrix a should be equal to number of rows of matrix b");
        return 0;
    }
    printf("enter elemnts of matrix a\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter element at position [a%d%d]\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("enter elements of matrix b\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("enter element at position [b%d%d]\n", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < m; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            } 
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}