#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("enter string");
    fgets(s,sizeof(s), stdin);
    int l=strlen(s), c=0;
    for(int i=1;i<l/2+1;i++){
        if(s[i-1]!=s[l-i-1]){
            c=1;
            break;
        }
    }
    if (c==0)
        printf("string is palindrome");
    else
        printf("string is not palindrome");
    return 0;
}