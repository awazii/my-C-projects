#include <stdio.h>
int fib(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}
int main()
{
    char a;
    printf("print a/b a(for iteration) and b(for recurtions): ");
    scanf("%c", &a);
    if (a == 'a')
    {
        int b;
        printf("\tfib with recurtions......\n");
        printf("enter the value : ");
        scanf("%d", &b);
        for (int i = 1; i <= b; i++)
        {
            printf("%lu\n", fib(i));
        }
    }
    else if (a == 'b')
    {
        int a, b, c, d;
        printf("\tfib with iterations......\n");
        printf("enter the value : ");
        scanf("%d", &d);
        a = -1;
        b = 1;
        for (int i = 1; i <= d; i++)
        {
            c = a + b;
            printf("%lu\n", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
