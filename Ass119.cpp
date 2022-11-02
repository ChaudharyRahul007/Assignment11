/*9. Write a program in C to find the square of any number using the function*/
#include<stdio.h>
int square(int n)
{
    return (n*n);
}
int main()
{
    int x,res;
    printf("Enter a number:");
    scanf("%d",&x);
    res = square(x);
    printf("%d ",res);
    return 0;

}