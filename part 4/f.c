#include <stdio.h>

int main()
{
   int a ,b,c,d;
   d=b;
   printf("Enter the number you want the square of:\n");
   scanf("%d",&a);
   printf("enter the power of that square:\n",a);
   scanf("%d",&b);
    c=a;
   for ( int i = 1; i < b; i++)
   { 
       c*=a;
   }
   printf("square of %d with %d time is:%d",a,b,c);
   

    return 0;
}
