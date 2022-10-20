#include <stdio.h>
void Star_pattern()
{
    int a;
    printf("Enter how many line of star pattern you want to print: \n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
void table(int a);
float divide()
{
    float a, b, c;
    printf("enter the first value: \n");
    scanf("%f", &a);
    printf("enter the second value: \n");
    scanf("%f", &b);
    c=(float)a/b;
   // printf("a / b = %0.1f\n",c);
    return c;
}
float percent(int a)
{
  float calculation;
  calculation=(a/1100.0)*100.0;
  return calculation;
}
int main()
{
    char a;
    printf("enter a if you want (Without arguments and without return value) fuction\n");
    printf("enter b if you want (Without arguments and with return value) fuction\n");
    printf("enter c if you want (With arguments and without return value) fuction\n");
    printf("enter d if you want (With arguments and with return value) fuction\n");
    printf("enter here: ");
    scanf("%c", &a);
    if (a == 'a')
    {
        printf("function Without arguments and without return value.......\n");
        Star_pattern();
    }
    else if (a == 'b')
    {
        printf("function Without arguments and with return value........\n");
        printf("a / b =%0.1f",divide());
    }
    else if (a == 'c')
    {
        int t;
        printf("function With arguments and without return value.........\n");
        printf("enter the number you want the table of: ");
        scanf("%d", &t);
        table(t);
    }
    else if (a == 'd')
    {
        printf("function With arguments and with return value........\n");
        int marks;
        printf("enter your marks and i will tell you your percentage: ");
        scanf("%d",&marks);
        printf("your percentage is %0.1f",percent(marks));

    }
    else
    {
        printf("input is invalid.......");
    }

    return 1;
}
void table(int b)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", b, i, b * i);
    }
}
