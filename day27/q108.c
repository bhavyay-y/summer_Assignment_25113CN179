#include <stdio.h>
#include <string.h>

int main()
{
    int ch, rn;
    char name[50];
    float m1, m2, m3, total, per;
    printf("enter student details\n");
    printf("enter roll no: ");
    scanf("%d", &rn);
    getchar();
    printf("enter student name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("enter marks in c: ");
    scanf("%f", &m1);
    printf("enter marks in python: ");
    scanf("%f", &m2);
    printf("enter marks in dbms: ");
    scanf("%f", &m3);
    total = m1 + m2 + m3;
    per = total / 3;

    while(1)
    {
        printf("\n1. display marksheet");
        printf("\n2. update marks");
        printf("\n3. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nmarksheet\n");
                printf("roll no = %d\n", rn);
                printf("name = %s\n", name);
                printf("c = %.2f\n", m1);
                printf("python = %.2f\n", m2);
                printf("dbms = %.2f\n", m3);
                printf("total = %.2f\n", total);
                printf("percentage = %.2f\n", per);

                if(per >= 90)
                    printf("grade = A\n");
                else if(per >= 75)
                    printf("grade = B\n");
                else if(per >= 60)
                    printf("grade = C\n");
                else if(per >= 45)
                    printf("grade = D\n");
                else if (per>=33)
                    printf("grade = E\n");
                else
                    printf("grade = F\n");

                break;

            case 2:
                printf("enter new marks in c: ");
                scanf("%f", &m1);

                printf("enter new marks in python: ");
                scanf("%f", &m2);

                printf("enter new marks in dbms: ");
                scanf("%f", &m3);

                total = m1 + m2 + m3;
                per = total / 3;

                printf("marks updated\n");
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