#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    if(x<2){
        printf("-1");
    }
    else{
      for(i=2;i<=x;i+=2)
    {
 
        printf("%d\n",i);
 
    }
    }
 
 
}
