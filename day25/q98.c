#include <stdio.h>
#include <string.h>

int main(){
    char s1[100], s2[100];
    printf("enter first string");
    fgets(s1, sizeof(s1), stdin);
    printf("enter second string");
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';
    int l1=strlen(s1), l2=strlen(s2),max,m=0;
    if (l1>l2)
        max=l1;
    else
        max=l2;
    char c[max+1];
    for (int i = 0; i < l1; i++)
    {
        int count=0;
        for (int j = 0; j < l2; j++)
        {
            if (s1[i]==s2[j])
            {
                for (int k = 0; k <m; k++)
                {
                    if (s1[i]==c[k])
                    {
                        count++;
                    }
                }
                if (count==0)
                {
                    c[m]=s1[i];
                    m++;
                }
                
            }
            
        }
    }
    c[m]='\0';
    if (m==0)
    {
        printf("no common character");
    }
    else
        printf("common characters are\n%s", c);
    return 0;
}