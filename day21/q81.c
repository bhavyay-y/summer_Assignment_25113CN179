#include <stdio.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s, sizeof(s), stdin);
    printf("%s", s);
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    if (i>0&&s[i-1]=='\n')
    {
        i--;
    }
    printf("length of string: %d", i);
    return 0;
}