#include <stdio.h>
#include <string.h>

int main()
{
    int ch, n, i, r[100];
    char name[100][50], branch[100][30], sec[100][10];
    float sgpa[100];
    printf("enter number of students: ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++)
    {
        printf("\nenter details of student %d\n", i + 1);
        printf("enter roll no: ");
        scanf("%d", &r[i]);
        getchar();
        printf("enter name: ");
        fgets(name[i], 50, stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
        printf("enter branch: ");
        fgets(branch[i], 30, stdin);
        branch[i][strcspn(branch[i], "\n")] = '\0';
        printf("enter section: ");
        fgets(sec[i], 10, stdin);
        sec[i][strcspn(sec[i], "\n")] = '\0';
        printf("enter sgpa: ");
        scanf("%f", &sgpa[i]);
        getchar();
    }

    while(1)
    {
        printf("\n1. display records");
        printf("\n2. update sgpa");
        printf("\n3. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nstudent %d\n", i + 1);
                    printf("roll no = %d\n", r[i]);
                    printf("name = %s\n", name[i]);
                    printf("branch = %s\n", branch[i]);
                    printf("section = %s\n", sec[i]);
                    printf("sgpa = %.2f\n", sgpa[i]);
                }
                break;

            case 2:
                printf("enter student number (1-%d): ", n);
                scanf("%d", &i);

                if(i >= 1 && i <= n)
                {
                    printf("enter new sgpa: ");
                    scanf("%f", &sgpa[i - 1]);
                    printf("record updated\n");
                }
                else
                {
                    printf("invalid student number\n");
                }

                break;

            case 3:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
    return 0;
}