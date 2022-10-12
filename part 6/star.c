#include <stdio.h>
int main()
{
   int a;
    a = 1;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 6; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
        for (int k = 1; k <= a; k++)
        {
            printf("  ");
        }
        a += 1;
    }
    return 0;
}
