#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num *factorial(num-1));
    }
}
int main()
{
    char a;
    printf("enter a if you want factorial in iteration\n");
    printf("enter b if you want factorial in Recursion\n");
    printf("enter here : ");
    scanf("%c", &a);
    if (a == 'a')
    {
        int a, b;
        printf("factorial in iterations.......\n");
        printf("enter the number you want the factorial of :  \n");
        scanf("%d", &a);
        b = a;
        for (int i = 1; i <= a - 1; i++)
        {
            b *= i;
        }
        printf("factorial of %d is %lu", a, b);
    }
    else if (a == 'b')
    {
        int a;
        printf("factorial in Recursion.......\n");
        printf("enter the number you want the factorial of :  \n");
        scanf("%d", &a);
        printf("factorial of %d is %d",a,factorial(a));
    }
    else
    {
        printf("your input is invaild.....");
    }

    return 0;
}
