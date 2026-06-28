#include <stdio.h>
#include <string.h>

struct book
{
    int id;
    char t[50];
    char a[50];
    int is;
};

int main()
{
    struct book b;
    int ch;
    printf("enter book details\n");
    printf("enter book id: ");
    scanf("%d", &b.id);
    getchar();
    printf("enter book title: ");
    fgets(b.t, 50, stdin);
    b.t[strcspn(b.t, "\n")] = '\0';
    printf("enter author name: ");
    fgets(b.a, 50, stdin);
    b.a[strcspn(b.a, "\n")] = '\0';
    b.is = 0;

    while(1)
    {
        printf("\n1. display book details");
        printf("\n2. issue book");
        printf("\n3. return book");
        printf("\n4. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nbook details\n");
                printf("book id = %d\n", b.id);
                printf("book title = %s\n", b.t);
                printf("author = %s\n", b.a);

                if(b.is == 0)
                    printf("status = available\n");
                else
                    printf("status = issued\n");

                break;

            case 2:
                if(b.is == 0)
                {
                    b.is = 1;
                    printf("book issued successfully\n");
                }
                else
                {
                    printf("book is already issued\n");
                }

                break;

            case 3:
                if(b.is == 1)
                {
                    b.is = 0;
                    printf("book returned successfully\n");
                }
                else
                {
                    printf("book is already available\n");
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