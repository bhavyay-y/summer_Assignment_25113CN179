#include <stdio.h>

int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    int n, n1;
    printf("enter two numbers");
    scanf("%d %d", &n, &n1);
    printf("maximum is %d", max(n, n1));
    return 0;
}