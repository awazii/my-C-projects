#include <stdio.h>
int main()
{
    int a ,i;
    int b=1;
    for ( i = 4; i >= 1; i--)
    {
        
        for ( a = 1; a<=i ; a++)
        {
            printf("%d ",b);
            b+=1;
        }
    printf("\n");

    }
    return 0;
}
