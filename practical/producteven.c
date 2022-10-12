#include <stdio.h>
int main()
{
    int i,even=1;
    for ( i = 2; i <= 20; i=i+2)
    {
        even*=i;
    }
    printf("Product of First 10 even numbers is %lu\n",even);
    return 0;
}