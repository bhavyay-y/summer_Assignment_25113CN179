#include <stdio.h>

int sum_two(int a, int b)
{
    return a + b;
}

int main()
{
    int n, n1;
    printf("enter two numbers");
    scanf("%d %d", &n, &n1);
    printf("sum of numbers %d and %d is %d", n, n1, sum_two(n, n1));
    return 0;
}