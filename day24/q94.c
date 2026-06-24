#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    int l=strlen(s),m=0;
    int c[l];
    char cs[l+1];
    for (int i = 0; i < l; i++)
    {
        int n=0,o=0;
        for (int j = i; j < l; j++)
        {
            if (s[i]!=s[j+1])
            {
                n++;
                break;
            }
            else if(s[i]==s[j]){
                n++;
            }
        }
        if (s[i]==s[i-1])
        {
            o++;
        }
        if (o==0)
        {
            cs[m]=s[i]; 
            c[m]=n;
            m++;
        }
    }
    cs[m]='\0';
    int l1=strlen(cs);
    for (int i = 0; i < l1; i++)
    {
        printf("%c%d",cs[i],c[i]);
    }
    return 0;
}