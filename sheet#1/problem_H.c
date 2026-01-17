#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2;
 
    scanf("%d %d",&num1,&num2);
 
    printf("floor %d / %d = %.0f\n",num1,num2,floor((float)num1/num2));
    printf("ceil %d / %d = %.0f\n",num1,num2,ceil((float)num1/num2));
    printf("round %d / %d = %.0f\n",num1,num2,round((float)num1/num2));
 
}
