#include <stdio.h>
#include <string.h>

int main()
{
    int ch, id;
    char name[50], department[30];
    float salary;
    printf("enter employee details\n");
    printf("enter employee id: ");
    scanf("%d", &id);
    getchar();
    printf("enter employee name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("enter department: ");
    fgets(department, 30, stdin);
    department[strcspn(department, "\n")] = '\0';
    printf("enter salary: ");
    scanf("%f", &salary);

    while(1)
    {
        printf("\n1. display details");
        printf("\n2. update salary");
        printf("\n3. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nemployee details\n");
                printf("employee id = %d\n", id);
                printf("employee name = %s\n", name);
                printf("department = %s\n", department);
                printf("salary = %.2f\n", salary);
                break;

            case 2:
                printf("enter new salary: ");
                scanf("%f", &salary);
                printf("salary updated\n");
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