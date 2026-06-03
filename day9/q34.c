#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d", a + i - j);
        }
        printf("\n");
    }
    return 0;
}