/*4.Write a function to find the next prime number of a given number. (TSRS)*/
#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a Number to find next prime no:");
    scanf("%d",&x); 
    prime(x);
    return 0;

}
int prime(int a)
{
    int i,j,c;
    for(j=a;;j++)
    {
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        break;
    }
       if(i==a)
        break;
    }
   return j;
}
