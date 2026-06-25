#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("enter number of names: ");
    scanf("%d", &n);
    getchar();

    char s[n][100], t[100];

    printf("enter %d names:\n", n);

    for(int i=0; i<n; i++)
    {
        fgets(s[i], 100, stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(strcmp(s[j], s[j+1]) > 0)
            {
                strcpy(t, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], t);
            }
        }
    }

    printf("\nnames in alphabetical order are:\n");

    for(int i=0; i<n; i++)
    {
        printf("%s\n", s[i]);
    }

    return 0;
}