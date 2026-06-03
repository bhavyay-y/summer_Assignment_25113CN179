#include <stdio.h>

int rec_rev(int num, int r)
{
    if (num == 0)
        return r;
    else
        return rec_rev(num / 10, r * 10 + num % 10);
}

int main()
{
    int n, r = 0;
    printf("enter number");
    scanf("%d", &n);
    printf("reverse of %d is %d", n, rec_rev(n, r));
    return 0;
}