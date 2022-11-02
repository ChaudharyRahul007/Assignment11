/*8. Write a function to print PASCAL Triangle. (TSRN)*/
#include<stdio.h>
//int fact(int);
//int comb(int, int);
//int prem(int, int);
//void pascal(int);
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    fact= fact*i;
    return fact;
}
int comb(int a, int b)
{
   return fact(a)/(fact(b)*fact(a-b));
}
 int prem(int n, int r)
 {
     return fact(n)/fact(n-r);
 }
 void pascal(int y)
 {
    int s,r;
    for(s=0;s<=y;s++)
    {
        for(r=0;r<=s;r++)
        {
        printf("%d ",comb(s,r));
        }
        printf("\n");
    }
 }
 int main()
 {
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    pascal(m);
    return 0;
 }

