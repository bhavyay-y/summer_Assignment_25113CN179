#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i += 2)
    {
        for (int j = 9; j > i; j -= 2)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
}