#include <stdio.h>

int main()
{
    char a = 'A';
    for (int i = 1; i < 10; i += 2)
    {
        for (int j = 9; j > i; j -= 2)
        {
            printf(" ");
        }
        for (int k = 0; k <= i / 2; k++)
        {
            printf("%c", a + k);
        }
        for (int l = i / 2; l > 0; l--)
        {
            printf("%c", a + l - 1);
        }
        printf("\n");
    }
}