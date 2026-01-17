#include<stdio.h>
int main()
{
    int n,i,a,j;
    long long num;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       num=1;
       scanf("%d",&a);
       for(j=1;j<=a;j++)
       {
           num=num*j;
       }
       printf("%lld\n",num);
 
    }
}
