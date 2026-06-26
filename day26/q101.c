#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, g, c = 0;

    srand(time(NULL));
    n = rand() % 100 + 1;

    printf("guess number between 1 and 100\n");

    while (1)
    {
        printf("enter your guess: ");
        scanf("%d", &g);

        c++;

        if (g == n)
        {
            printf("congratulations! you guessed the correct number.\n");
            printf("number of attempts = %d", c);
            break;
        }
        else if (g > n)
        {
            printf("guess smaller number.\n");
        }
        else
        {
            printf("guess larger number.\n");
        }
    }

    return 0;
}