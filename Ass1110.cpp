/*10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the 
functio*/
#include<stdio.h>
int fact(int x)
{
    int i,fact=0;
    for(i=1;i<=x;i++)
     fact = fact+i;
     return fact;
}
int main()
{
    int i,sum = 0;
    for(i=1;i<=5;i++)
    {
        sum = sum + fact(i)/i;
    }
    printf("%d ",sum);
    return 0;
}