#include <stdio.h>
 
int main() {
    char s[100005];
    int i=0;
 
    scanf("%[^\n]",s);
 
    while (s[i]!='\0') {
 
        if (s[i]==',')
            s[i]=' ';
        else if (s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
        else
            s[i]=s[i]+32;
 
        i++;
    }
 
    printf("%s", s);
    return 0;
}
