#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f,num;
    scanf("%lld%lld%lld",&a,&b,&c);
    d=a;
    e=b;
    f=c;
 
    if(a>b){
        num=a;
        a=b;
        b=num;
    }
    if(b>c){
        num=b;
        b=c;
        c=num;
    }
    if(a>b){
        num=a;
        a=b;
        b=num;
    }
 
    printf("%lld\n%lld\n%lld\n\n",a,b,c);
    printf("%lld\n%lld\n%lld\n",d,e,f);
 
 
