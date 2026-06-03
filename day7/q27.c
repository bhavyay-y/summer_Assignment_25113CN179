#include <stdio.h>

int sum_d(int num)
{
    if (num == 0)
        return num;
    else if (num < 0)
        sum_d(-num);
    else
        return num % 10 + sum_d(num / 10);
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    printf("sum of digits of %d is %d", n, sum_d(n));
    return 0;
}