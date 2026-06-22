#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s, sizeof(s), stdin);
    int l=strlen(s), f=0;
    char ns[l+1];
    for (int i = 0; i < l; i++)
    {
        if (s[i]==' '||s[i]=='\t')
        {
            continue;
        }
        else{
            ns[f]=s[i];
            f++;
        }
    }
    ns[f]='\0';
    printf("string without spaces is:\n%s",ns);
    return 0;
}