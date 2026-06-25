#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], w[50][100], t[100];
    int i = 0, j = 0, k = 0, n = 0;

    printf("enter a string: ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';

    while (1)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            w[n][k] = '\0';
            n++;
            k = 0;

            if (s[i] == '\0')
                break;
        }
        else
        {
            w[n][k] = s[i];
            k++;
        }
        i++;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (strlen(w[j]) > strlen(w[j + 1]))
            {
                strcpy(t, w[j]);
                strcpy(w[j], w[j + 1]);
                strcpy(w[j + 1], t);
            }
        }
    }

    printf("\nwords sorted according to length are:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", w[i]);
    }

    return 0;
}