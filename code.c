#include<stdio.h>
int main()
{
   int a,b,fact=1;
   printf("Enter the integer\a");
   scanf("%d",&a);
   for(b=1;b<=a;b++)
   {
      fact=fact*b;
   }
 printf("the freaction %d %d",a,fact");
  }

