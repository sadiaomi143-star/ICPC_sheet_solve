#include<stdio.h>
void check(int n)
{
   if(n>=1)
   {
       if(n==1)
        printf("%d",n);
       else
        printf("%d ",n);
       check(n-1);
   }
}
 
int main ()
{
    int n;
    scanf("%d",&n);
    check(n);
}
