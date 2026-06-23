#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    int l=strlen(s),f=1,n;
    for (int i = 0; i < l; i++)
    {
        int c=1;
        for (int j = 0; j < l; j++)
        {
            if(i==j)
            continue;
            else if(s[i]==s[j]){
                c=0;
                break;
            }
        }
        if (c==0)
        {
            f=0;
            n=i;
            break;
        }
    }
    if (f==0)
        printf("first repeating character is %c", s[n]);
    else
        printf("no repeating character");
    return 0;
}