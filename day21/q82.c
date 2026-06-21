#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s, sizeof(s), stdin);
    printf("%s", s);
    int l= strlen(s);
    char s1[l];
    for (int i = 0; i <l; i++)
    {
        if (s[i]=='\n')
        {
            s1[i]='\0';
        }
        else
            s1[i]=s[i];
    }
    char rs[l];
    for (int i = 1; i < l; i++)
    {
        rs[i-1]=s1[l-i-1];
    }
    rs[l-1]='\0';
    printf("reverse of string %s is %s", s1, rs);
    return 0;
}