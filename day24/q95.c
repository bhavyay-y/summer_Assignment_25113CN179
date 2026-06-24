#include <stdio.h>
int main() {
    char s[200],w[50],s1[50];
    int i=0,j=0,maxl=0,l=0;
    printf("enter sentence: ");
    fgets(s,sizeof(s),stdin);
    while(1){
        l=0;
        while(s[i]!=' '&&s[i]!='\0'&&s[i]!='\n'){
            w[l]=s[i];
            l++;
            i++;
        }
        w[l]='\0';
        if(l>maxl){
            maxl=l;
            for(j=0;j<=l;j++) {
                s1[j]=w[j];
            }
        }
        if (s[i]=='\0'||s[i]=='\n') {
            break;
        }
        i++;
    }
    printf("largest word is %s\n", s1);
    return 0;
}