#include <stdio.h>
#include <string.h>

int main()
{
    int ch, n, i, id[100];
    char name[100][50], dept[100][30];
    double sal[100];
    printf("enter number of employees: ");
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        printf("\nenter details of employee %d\n", i + 1);
        printf("enter employee id: ");
        scanf("%d", &id[i]);
        getchar();
        printf("enter employee name: ");
        fgets(name[i], 50, stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
        printf("enter department: ");
        fgets(dept[i], 30, stdin);
        dept[i][strcspn(dept[i], "\n")] = '\0';
        printf("enter salary: ");
        scanf("%lf", &sal[i]);
        getchar();
    }

    while(1)
    {
        printf("\n1. display employees");
        printf("\n2. update salary");
        printf("\n3. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nemployee %d\n", i + 1);
                    printf("employee id = %d\n", id[i]);
                    printf("employee name = %s\n", name[i]);
                    printf("department = %s\n", dept[i]);
                    printf("salary = %.2f\n", sal[i]);
                }
                break;

            case 2:
                printf("enter employee number (1-%d): ", n);
                scanf("%d", &i);

                if(i >= 1 && i <= n)
                {
                    printf("enter new salary: ");
                    scanf("%lf", &sal[i - 1]);
                    printf("salary updated\n");
                }
                else
                {
                    printf("invalid employee number\n");
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