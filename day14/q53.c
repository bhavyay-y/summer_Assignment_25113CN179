#include <stdio.h>

int main(){
    int n, a;
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
            printf("element %d found at index %d\n", a, i);
        }
    }
    return 0;
}