#include <stdio.h>
#include <string.h>

int main(){
    char s[100], s1[100];
    printf("enter string 1");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    printf("enter string 2");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    int l=strlen(s),l1=strlen(s1),f=0;
    if (l1!=l)
    {
        printf("strings must be of equal length");
        return 0;
    }
    char rs[l+1];
    for (int i = 0; i < l; i++)
    {
        int n=0,c=0;
        for (int j = i; j < l; j++)
        {
            rs[n]=s1[j];
            n++;
        }
        if (n!=l)
        {
            int n1=n;
            for (int k = 0; k < l-n1; k++)
            {
                rs[n]=s1[k];
                n++;
            }
        }
        rs[l]='\0';
        for (int m = 0; m < l; m++)
        {
            if (rs[m]==s[m])
            {
                c++;
            } 
        }
        if (c==l)
        {
            f=1;
            break;
        }
    }
    if (f==1)
        printf("rotation is possible");
    else
        printf("rotatio is not possible");
    return 0;
}
