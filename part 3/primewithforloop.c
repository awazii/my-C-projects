#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf("Enter two numbers to find prime number between them\n");
    printf("Enter number one:\n");
    scanf("%d", &a);
    printf("enter number two:\n");
    scanf("%d", &b);
    printf("prime numbers between %d and %d are:\n",a,b);
    for (c = a; c <= b; c++)
    {
        int j=0;
        for (i = 2; i <= c; i++)
        {
            
            if (c % i == 0)
            {
                j++;
            }
        }
        if (j==1)
            printf("%d is prime number. \n", c);
        else
        {
            printf("%d is not a prime number\n",c);
        }
            
    }

    return 0;
}
