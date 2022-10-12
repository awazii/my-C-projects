#include <stdio.h>
int fibonacci(int num)
{
    if (num == 1 || num == 2)
    {
        return num - 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
int main()
{
    char value;
    printf("Enter a if you want fibonacci series in iteration.\n");
    printf("Enter b if you want fibonacci series in recurtion.\n");
    printf("enter here:\n");
    scanf("%c", &value);
    if (value == 'a')
    {
        printf("\tFibonacci series in iteration.....\n");
        int number;
        printf("Enter how many fibonacci terms you want: ");
        scanf("%d", &number);
        if (number >= 1)
        {
            int a = -1;
            int b = 1;
            int c;
            for (int i = 1; i <= number; i++)
            {
                c = a + b;
                printf("%lu\n", c);
                a = b;
                b = c;
            }
        }
        else
        {
            printf("your input is invalid!!");
        }
    }
    else if (value == 'b')
    {
        printf("\tFibonacci series in recurtions.....\n");
        int number;
        printf("Enter how many fibonacci terms you want: ");
        scanf("%d", &number);
        if (number >= 1)
        {
            for (int i = 1; i <= number; i++)
            {
                printf("%lu\n", fibonacci(i));
            }
        }
        else
        {
            printf("your input is invalid!!!");
        }
    }
    else
    {
        printf("your input is invalid!!");
    }
    return 0;
}
