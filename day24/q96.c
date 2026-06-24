#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i,j,k;
    printf("enter string ");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")]='\0';
    int l=strlen(s);
    printf("%d",l);
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(s[i]==s[j]){
                for(k=j;k<l;k++){
                    s[k]=s[k+1];
                }
                l--;
                j--;
            }
        }
    }
    printf("string with no duplicates: %s\n", s);
    return 0;
}