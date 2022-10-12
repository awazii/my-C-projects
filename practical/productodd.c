#include <stdio.h>
int main()
{
    int i,odd=1;
    for ( i = 1; i <= 20; i=i+2)
    {
        odd*=i;
    }
    printf("Product of First 10 odd numbers is %lu\n",odd);
    return 0;
}