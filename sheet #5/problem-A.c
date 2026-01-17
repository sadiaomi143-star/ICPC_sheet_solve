#include<stdio.h>//with pera & with return
int sum(int a,int b)
{
    return a+b;
}
 
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    printf("%d",sum(a,b));
}
