#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long  a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
 
    }
    long long p;
    scanf("%lld",&p);
    for(int i =0;i<n;i++)
    {
        if(p==a[i])
        {
            printf("%d\n",i);return 0;
        }
    }
    printf("-1\n");
}
