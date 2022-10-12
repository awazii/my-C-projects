#include <stdio.h>

int main()
{
   int a ,b;
   b=0;
   while (a!=0)
   {
    printf("enter a number:\n");
    scanf("%d",&a);
    b+=a;
   }
   printf("sum is:%d",b);
   

    return 0;
}
