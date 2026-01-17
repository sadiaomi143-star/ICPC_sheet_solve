#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
 
    if((x>='A'&& x<='Z')||(x>='a'&& x<='z'))
    {
 
        printf("ALPHA\n");
        if(x>='A'&& x<='Z')
        {
            printf("IS CAPITAL\n");
 
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    else
    {
        printf("IS DIGIT");
    }
 
 
 
 
 
 
}
