#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100], s1[100];
    printf("enter string 1");
    fgets(s,sizeof(s),stdin);
    printf("enter string 2");
    fgets(s1,sizeof(s1),stdin);
    s[strcspn(s,"\n")]='\0';
    s1[strcspn(s1,"\n")]='\0';
    int l=strlen(s),l1=strlen(s1),c=0;
    if (l1!=l)
    {
        printf("both strings must be equal in length");
        return 0;
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = i; j < l; j++)
        {
            if(tolower(s[i])>=tolower(s[j])){
               char c=tolower(s[i]);
                s[i]=tolower(s[j]);
                s[j]=c;
            }
            if (tolower(s1[i])>tolower(s1[j]))
            {
                int c =tolower(s1[i]);
                s1[i]=tolower(s1[j]);
                s1[j]=c;
            }    
        } 
    }
    for (int i = 0; i < l; i++)
    {
        if((s[i])==(s1[i]))
            c++;
    }
    if (c==l)
        printf("anagram strings");
    else
        printf("not anagram strings");
    return 0;
}