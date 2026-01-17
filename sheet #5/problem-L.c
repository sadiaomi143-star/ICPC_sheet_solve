#include<stdio.h>
int sum(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
 
    int b[n];
     for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
     }
     sum(a,b,n);
 
}
