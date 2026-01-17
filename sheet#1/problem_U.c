#include <stdio.h>
int main()
{
    double a,b,x;
    int temp;
    scanf("%lf",&a);
    b=a;
    temp=a;
    x=b-temp;
    if(x<=0)
    {
        printf("int %d",temp);
    }
    else{
        printf("float %d %.3lf",temp,x);
    }
 
}
