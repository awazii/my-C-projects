#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter number in fahrenheit:\n");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("Celsius is %0.2f",b);
    return 0;
}
