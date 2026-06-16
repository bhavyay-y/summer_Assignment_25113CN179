#include <stdio.h>

int main(){
    int n, a, count=0;
    printf("enter numberb of elemnts");
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter element");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (b[i]==b[j])
            {
                printf("duplicate of %d exist in array\n", b[i]);
                count=1;
                break;
            }
            
        }
    }
    if (count==0)
    {
        printf("no duplicate found");
    }
    
    return 0;
}