#include <stdio.h>
int main()
{
    int a,i,j;
    j=0;
    printf("Enter the number you want to check if it is prime or not:\n");
    scanf("%d",&a);
    for (i = 2; i <= a; i++)
    {
        if (a%i==0)
        {
            j++;
        } 
    }
    if (j==1)
    {
        printf("%d is prime number. \n", a);
    }
    else
    {
        printf("%d is  not  a prime number. \n", a);
    }
    
    

    
    return 0;
}
