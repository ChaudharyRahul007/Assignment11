/*5. Write a function to print first N prime numbers (TSRN)*/
#include<stdio.h>
int primeN(int);
int main()
{
    int y;
    printf("Enter a Number:");
    scanf("%d",&y);
    printf("%d",primeN(y));
    return 0;

}
int primeN(int a)
{
    int i,x=2;
    while (a)
    {
    for(i=2;i<x;i++)
        if(a%i==0)
        break;
    if(i==a)
    {
    printf("%d ",a);
    a--;
    }
    x++;
    }
}
