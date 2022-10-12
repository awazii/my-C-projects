#include <stdio.h>
int main()
{
    int a;
    printf("enter a number to see if it is odd or even:\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is even number.",a);
    }
   // else if (a%2!=0)
   else


    {
        printf("%lu is odd number.",a);
    }  
    return 0;
}
