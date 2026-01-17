#include <stdio.h>
 
int primeCheck() {
    int n, j;
 
    scanf("%d", &n);
 
    if (n < 2)
        return 0;
 
    for (j = 2; j * j <= n; j++) {
        if (n % j == 0)
            return 0;
    }
    return 1;
}
 
int main() {
    int T, i;
 
    scanf("%d", &T);
 
    for (i = 1; i <= T; i++) {
        if (primeCheck())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
