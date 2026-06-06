#include <stdio.h>
#include <math.h>

int armstrong(int a)
{
    int b = a, d = 0, r = 0;
    if (a == 0)
        return 0;
    while (b != 0)
    {
        b = b / 10;
        d++;
    }
    while (a != 0)
    {
        r += pow(a % 10, d);
        a /= 10;
    }
    return r;
}

int main()
{
    int n, an;
    printf("enter number");
    scanf("%d", &n);
    an = armstrong(n);
    if (an == n)
        printf("armstrong number");
    else
        printf("not an armstrong number");
    return 0;
}