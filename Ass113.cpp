/*3. Write a function to check whether a given number is Prime or not. (TSRS)*/
#include<stdio.h>
int prime(int);
int main()
{
    int x;
    printf("Enter a Number to check  prime or not:");
    scanf("%d",&x);
    prime(x);
    return 0;

}
int prime(int a)
{
    int i;
    for(i=2;i<=a-1;i++)
        if(a%i==0)
        break;
    if(i==a)
    printf("%d are a prime ",a);
    else
    printf("%d are not a prime",a);
}
