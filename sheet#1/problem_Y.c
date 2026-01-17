#include<stdio.h>
int main()
{
    long long int A,B,C,D,sum1;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    sum1=(A%100*B%100*C%100*D%100)%100;
 
 
 
 
 
        printf("%02lld",sum1);
 
 
 
 
 
}
