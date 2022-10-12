#include <stdio.h>
int main()
{
    int a, b, c = 1;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d", &a);
    b = a;
    if (a == 0 || a == 1)
    {
        printf("Factorial of %d is 1", a);
    }
    else
    {
        for (int i = a; i >= 1; i--)
        {
            c *= i;
        }
        printf("factoria of %d is %d", b, c);
    }

    return 0;
}
