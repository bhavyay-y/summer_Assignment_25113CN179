#include <stdio.h>

int main()
{
    int ch;
    float salary, bonus, deduction, netsalary;
    printf("enter basic salary: ");
    scanf("%f", &salary);
    bonus = 0;
    deduction = 0;
    netsalary = salary;

    while(1)
    {
        printf("\n1. display salary");
        printf("\n2. add bonus");
        printf("\n3. deduct amount");
        printf("\n4. display net salary");
        printf("\n5. exit");
        printf("\nenter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("basic salary = %.2f\n", salary);
                break;

            case 2:
                printf("enter bonus: ");
                scanf("%f", &bonus);
                netsalary = salary + bonus - deduction;
                printf("bonus added\n");
                break;

            case 3:
                printf("enter deduction: ");
                scanf("%f", &deduction);
                netsalary = salary + bonus - deduction;
                printf("deduction applied\n");
                break;

            case 4:
                printf("basic salary = %.2f\n", salary);
                printf("bonus = %.2f\n", bonus);
                printf("deduction = %.2f\n", deduction);
                printf("net salary = %.2f\n", netsalary);
                break;

            case 5:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
    return 0;
}