#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
int main()
{
    int a;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d",&a);
    printf("\nfactorial of %d is %d",a,factorial(a));

    return 0;
}

