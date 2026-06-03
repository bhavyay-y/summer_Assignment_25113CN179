#include <stdio.h>

int rec_fact(int num)
{
    if (num == 0)
        return 1;
    else
        return num * rec_fact(num - 1);
}

int main()
{
    int n, f;
    printf("enter number");
    scanf("%d", &n);
    if (n < 0)
        printf("invaild input");
    else
    {
        f = rec_fact(n);
        printf("factorial of %d is %d", n, f);
    }
    return 0;
}