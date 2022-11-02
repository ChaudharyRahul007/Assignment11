/*6. Write a function to print all Prime numbers between two given numbers. (TSRN)*/
#include<stdio.h>
int allprime(int,int);
int main()
{
    int l,u;
    printf("Enter a two numbers");
    scanf("%d %d",&l,&u);
    allprime(l,u);
    return 0;

}
int allprime(int x, int y)
{
    int i,j;
    for(i=x+1;i<y-1;i++)
    {
        for(j=2;j<x;j++)
        if(x%j==0)
        break;
      if(j==x)
       printf("%d",x);
    }
}