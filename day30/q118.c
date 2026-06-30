#include <stdio.h>
#include <string.h>

int main()
{
    int ch, n, i, id[100], is[100];
    char t[100][50], a[100][50];
    printf("enter number of books: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        printf("\nenter details of book %d\n", i + 1);
        printf("enter book id: ");
        scanf("%d", &id[i]);
        getchar();
        printf("enter book title: ");
        fgets(t[i], 50, stdin);
        t[i][strcspn(t[i], "\n")] = '\0';
        printf("enter author name: ");
        fgets(a[i], 50, stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
        is[i] = 0;
    }

    while(1)
    {
        printf("\n1. display books");
        printf("\n2. issue book");
        printf("\n3. return book");
        printf("\n4. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nbook %d\n", i + 1);
                    printf("book id = %d\n", id[i]);
                    printf("book title = %s\n", t[i]);
                    printf("author = %s\n", a[i]);

                    if(is[i] == 0)
                        printf("status = available\n");
                    else
                        printf("status = issued\n");
                }
                break;

            case 2:
                printf("enter book number: ");
                scanf("%d", &i);

                if(i >= 1 && i <= n)
                {
                    if(is[i - 1] == 0)
                    {
                        is[i - 1] = 1;
                        printf("book issued successfully\n");
                    }
                    else
                    {
                        printf("book is already issued\n");
                    }
                }
                else
                {
                    printf("invalid book number\n");
                }

                break;

            case 3:
                printf("enter book number: ");
                scanf("%d", &i);

                if(i >= 1 && i <= n)
                {
                    if(is[i - 1] == 1)
                    {
                        is[i - 1] = 0;
                        printf("book returned successfully\n");
                    }
                    else
                    {
                        printf("book is already available\n");
                    }
                }
                else
                {
                    printf("invalid book number\n");
                }

                break;

            case 4:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
    return 0;
}