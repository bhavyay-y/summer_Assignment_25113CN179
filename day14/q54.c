#include <stdio.h>

int main(){
    int n, a, count=0;
    printf("enter numberb of elemnts");
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        int c;
        printf("enter element");
        scanf("%d", &c);
        b[i]=c;
    }
    printf("enter element to search");
    scanf("%d", &a);
    for(int i=0; i<n;i++){
        if (b[i]==a)
        {
            count++;
        }
    }
    printf("frequency of %d is %d\n", a, count);
    return 0;
}