#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    int l=strlen(s),max=0,f=0;
    for (int i = 0; i < l; i++)
    {
        int c=0;
        for (int j = 0; j < l; j++)
        {
            if (s[i]==s[j])
            {
                c++;
            }
        }
        if (c>max)
        {
            max=c;
            f=i;
        }
    }
    printf("maximum frequency character is %c occuring %d times", s[f],max);
    return 0;
}