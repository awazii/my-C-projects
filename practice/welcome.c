#include <stdio.h>
int main()
{
    float a ,b;
    char j;
    printf("Enter a if you want addition:\n");
    printf("Enter b if you want subtraction:\n");
    printf("Enter c if you want multiplication:\n");
    printf("Enter d if you want division:\n");
    printf("Enter here:\n");
    scanf("%c",&j);
    if (j=='a')
    {
       printf("Enter first value:\n");
       scanf("%f",&a);
       printf("Enter second value:\n");
       scanf("%f",&b);
       printf("addition......\n");
       printf("The answer is %.0f",a+b);
    }
    else if (j=='b')

    {
       printf("Enter first value:\n");
       scanf("%f",&a);
       printf("Enter second value:\n");
       scanf("%f",&b);
       printf("subtraction......\n");
       printf("The answer is %.0f",a-b);
    }
    else if (j=='c')
    {
       printf("Enter first value:\n");
       scanf("%f",&a);
       printf("Enter second value:\n");
       scanf("%f",&b);
       printf("multiplication......\n");
       printf("The answer is %0.0f",a*b);
    }
    else if (j=='d')
    {
       printf("Enter first value:\n");
       scanf("%f",&a);
       printf("Enter second value:\n");
       scanf("%f",&b);
       printf("division......\n");
       printf("The answer is %0.2f",a/b);
    }
    else
    {
        printf("Input is invaild.....");
    }
    return 0;
}
