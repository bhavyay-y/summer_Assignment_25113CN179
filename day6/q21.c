#include <stdio.h>

int main()
{
    int n, a, i = 0;
    int bn[100];
    printf("enter number");
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 2;
        bn[i] = a;
        n = n / 2;
        i++;
    }
    printf("binary number is:");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", bn[j]);
    }
}