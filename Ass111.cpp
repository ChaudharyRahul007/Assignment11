/*1. Write a function to calculate LCM of two numbers. (TSRS)*/
#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b;
    printf("Enter a two number:");
    scanf("%d %d",&a,&b);
    lcm(a,b);
    return 0;
}
int lcm(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        { 
         break;
        }
    }
    printf("LCM is = %d",i);
    
}