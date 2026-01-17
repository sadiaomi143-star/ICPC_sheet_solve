#include<stdio.h>
void avg(float ar[],int n)
{
 
    float sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=ar[i];
    }
    printf("%.7f",(float)sum/n);
}
 
int main()
{
    int i,n;
 
    scanf("%d",&n);
    float ar[100000];
    for(i=0; i<n; i++)
    {
        scanf("%f",&ar[i]);
    }
    avg(ar,n);
 
 
}
