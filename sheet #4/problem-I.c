#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1005], rev[1005];
    int i, len, j =0;
 
    scanf("%s",s);         
 
    len=strlen(s);         
 
 
    for (i = len-1;i>=0;i--) {
        rev[j] = s[i];
        j++;
    }
    rev[j] ='\0';          
    if (strcmp(s, rev)==0)
        printf("YES");
    else
        printf("NO");
 
    return 0;
}
