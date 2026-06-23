#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    int l=strlen(s), f=1,n;
    for (int i = 0; i < l; i++)
    {
        int c=0;
        for (int j = 0; j < l; j++)
        {
            if(i==j)
            continue;
            else if(s[i]==s[j]){
                c++;
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
    if(f==0)
        printf("first non repeating character is %c", s[n]);
    else
        printf("there is no non repeating character");
    return 0;
}