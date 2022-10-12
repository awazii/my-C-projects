#include <stdio.h>
int main()
{
    int i,even=0;
    for ( i = 2; i <= 20; i=i+2)
    {
        printf("%d\n",i);
        even+=i;
    }
    printf("sum is %d\n",even);
    printf("Average is %d",even/10);
    
    return 0;
}
