/*7. Write a function to print first N terms of Fibonacci series (TSRN)*/
#include<stdio.h>
 void fabo(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",n);
    //printf("0");
    fabo(n);
    return 0;
}

 void fabo(int x)
 {
   int pre=0,cur=1,next=0,i;
   for(i=0;i<x-1;i++)
   {
    next=pre+cur;
   printf("%d",next);
    pre=cur;
    cur= next;
   }
    }
