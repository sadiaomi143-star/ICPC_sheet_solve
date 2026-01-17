#include <stdio.h>
 
int main() {
    char s[1000005];
    int i = 0, count = 0;
 
    scanf("%[^\n]",s);
 
    while (s[i]!='\0') {
 
        
        if ((s[i] >= 'A' && s[i]<='Z') ||
            (s[i] >= 'a' && s[i]<='z')) {
 
            
            if (i == 0 ||
               !((s[i-1]>='A'&& s[i-1]<='Z') ||
                 (s[i-1]>='a'&& s[i-1]<='z'))) {
                count++;
            }
        }
        i++;
    }
 
    printf("%d", count);
    return 0;
}
