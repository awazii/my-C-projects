#include <stdio.h>
int main()
{
    char b;
    printf("Enter a if you want print odd numbers\n");
    printf("Enter b if you want print even numbers\n");
    printf("enter here:\n");
    scanf("%c", &b);
    if (b == 'a')
    {
        int n, decision;
        printf("So you want to print odd numbers\n");
        printf("enter how many odd numbers you want to print:\n");
        scanf("%d", &n);
        printf("enter 0 if you want the sum of odd numeber or\nenter 1 if you the product of odd number  ");
        scanf("%d", &decision);
        if (decision == 0)
        {
            int sum = 0;
            for (int i = 1; i <= n; i += 2)
            {
                printf("%d\n", i);
                sum += i;
            }
            int k;
            printf("Sum of all odd numbers are %d\n", sum);
            for (int j = 2; j <= sum; j++)
            {
                if (sum % j == 0)
                {
                    k++;
                }
            }
            if (k == 1)
            {
                printf("%d is prime", sum);
            }
            else
            {
                printf("%d is not prime", sum);
            }
        }
        else if (decision == 1)
        {
            int product = 1;
            for (int i = 1; i <= n; i += 2)
            {
                printf("%d\n", i);
                product *= i;
            }
            int k;
            printf("product of all odd numbers are %d\n", product);
            for (int j = 2; j <= product; j++)
            {
                if (product % j == 0)
                {
                    k++;
                }
            }
            if (k == 1)
            {
                printf("%d is prime", product);
            }
            else
            {
                printf("%d is not prime", product);
            }
        }
        else
        {
            printf("your input is invaild.......");
        }
    }
    else if (b == 'b')
    {
        int n, decision;
        printf("So you want to print even numbers\n");
        printf("enter how many even numbers you want to print:\n");
        scanf("%d", &n);
        printf("enter 0 if you want the sum of even numeber or\nenter 1 if you the product of even number  ");
        scanf("%d", &decision);
        if (decision == 0)
        {
            int sum = 0;
            for (int i = 2; i <= n; i += 2)
            {
                printf("%d\n", i);
                sum += i;
            }
            int k;
            printf("Sum of all even numbers are %d\n", sum);
            for (int j = 2; j <= sum; j++)
            {
                if (sum % j == 0)
                {
                    k++;
                }
            }
            if (k == 1)
            {
                printf("%d is prime", sum);
            }
            else
            {
                printf("%d is not prime", sum);
            }
        }
        else if (decision == 1)
        {
            int product = 1;
            for (int i = 2; i <= n; i += 2)
            {
                printf("%d\n", i);
                product *= i;
            }
            int k;
            printf("product of all even numbers are %lu\n", product);
            for (int j = 2; j <= product; j++)
            {
                if (product % j == 0)
                {
                    k++;
                }
            }
            if (k == 1)
            {
                printf("%lu is prime", product);
            }
            else
            {
                printf("%lu is not prime", product);
            }
        }
        else
        {
            printf("your input is invaild.......");
        }
    }
    else
    {
        printf("your input is invalid........");
    }
    return 0;
}
