#include <stdio.h>
int main()
{
    int a,i;
    a=0;
    printf("First 100 even numbers:\n");
    for ( i =0 ; i <= 200; i=i+2)
    {
       a+=i;
       printf("%d\n",i);
    }
    printf("sum is %d\n",a);
    return 0;
}
