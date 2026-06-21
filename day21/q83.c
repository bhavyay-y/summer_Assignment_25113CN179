#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s, sizeof(s), stdin);
    printf("%s", s);
    int l= strlen(s), c=0, v=0;
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]== 'A'||s[i]== 'E'||s[i]== 'I'||s[i]== 'O'||s[i]== 'U' )
            {
                v++;
            }
            else
                c++;
        }   
    }
    printf("number of consonats is %d and number of vowels is %d", c, v);
    return 0;
}