#include <stdio.h>

int main(){
    int n1,n2;
    printf("enter number of elements in array 1 and array 2: ");
    scanf("%d %d", &n1,&n2);
    int a1[n1],a2[n2],m[n1+n2];
    printf("\nenter elemnts of array 1\n");
    for (int i = 0; i < n1; i++)
    {
        printf("enter elment %d:", i+1);
        scanf("%d", &a1[i]);
        m[i]=a1[i];
    }
    printf("\nenter elemnts of array 2\n");
    for (int i = 0; i < n2; i++)
    {
        printf("enter elment %d:", i+1);
        scanf("%d", &a2[i]);
        m[n1+i]=a2[i];
    }
    for (int i = 0; i < n1+n2-1; i++)
    {
        for (int j = 0; j < n1+n2-1; j++)
        {
            if (m[j]>m[j+1])
            {
                int c= m[j];
                m[j]=m[j+1];
                m[j+1]=c;
            }
            
        }
        
    }
    printf("\nnew merged array after sorting:");
    for (int i = 0; i < n1+n2; i++)
    {
        printf("\n%d", m[i]);
    }
    
}