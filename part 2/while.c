#include <stdio.h>
int main()
{
    int  a,b;
    b = 0;
    printf("enter a number:\n");
    scanf("%d", &a);
   // printf("table of %d\n", a);
    while (b < a)
    {
        b = b + 1;
      printf("I Love You Awazii\n",b);
      //  printf("%d*%d=%d\n", a, b, a * b);
    }

    return 0;
}
