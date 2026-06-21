#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s, sizeof(s), stdin);
    printf("%s", s);
    int l= strlen(s), c=0, v=0;
    char uprs[l];
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            if (islower(s[i]))
            {
                uprs[i]=toupper(s[i]);
            }
            else
                uprs[i]=s[i];    
        }   
        else
            uprs[i]=s[i];
    }
    uprs[l]='\0';
    printf("string with upper case characters is %s", uprs);
    return 0;
}