#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s, sizeof(s), stdin);
    int l=strlen(s),f=0;
    char c;
    printf("enter character to find frequency of");
    scanf("%c", &c);
    for (int i = 0; i < l; i++)
    {
        if (s[i]==c)
        {
            f++;
        }
    }
    printf("frequency of character %c is %d", c,f);
    return 0;
}