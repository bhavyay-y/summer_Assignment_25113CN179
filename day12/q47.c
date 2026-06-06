#include <stdio.h>

int fibo(int num)
{
    if (num <= 1)
        return num;
    else
        return fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int n;
    printf("enter number of terms");
    scanf("%d", &n);
    if (n <= 0)
        printf("enter positive terms");
    else
    {
        printf("fibonacci series:");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", fibo(i));
        }
    }
    return 0;
}