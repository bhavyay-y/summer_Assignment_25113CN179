#include <stdio.h>
#include <string.h>

int main()
{
    int ch, roll;
    char name[50], branch[30], section[10];
    float sgpa;
    printf("enter student details\n");
    printf("enter roll no: ");
    scanf("%d", &roll);
    getchar();
    printf("enter name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("enter branch: ");
    fgets(branch, 30, stdin);
    branch[strcspn(branch, "\n")] = '\0';
    printf("enter section: ");
    fgets(section, sizeof(section), stdin);
    printf("enter sgpa: ");
    scanf("%f", &sgpa);
    while(1)
    {
        printf("\n1. display record");
        printf("\n2. update sgpa");
        printf("\n3. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nstudent record\n");
                printf("roll no = %d\n", roll);
                printf("name = %s\n", name);
                printf("branch = %s\n", branch);
                printf("section = %s\n", section);
                printf("sgpa = %.2f\n", sgpa);
                break;

            case 2:
                printf("enter new sgpa: ");
                scanf("%f", &sgpa);
                printf("record updated\n");
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