#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int l,c=0;
    printf("enter string");
    fgets(s,sizeof(s),stdin);
    l=strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i]==' '||s[i]=='\t')
        {
            c++;
        }
        if ((s[i]==' '||s[i]=='\t')&&(s[i+1]==' '||s[i+1]=='\t'))
        {
            c--;
        }
    }
    if (s[0]==' ')
    {
        c--;
    }
    if (l>=2&&s[l-2]==' ')
    {
        c--;
    }
    if (s[0]=='\n')
    {
        c--;
    }
    
    printf("number of words in entered string: %d", c+1);
    return 0;
}