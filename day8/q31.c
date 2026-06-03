#include <stdio.h>

int main()
{
    char a = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", a + j);
        }
        printf("\n");
    }
    return 0;
}