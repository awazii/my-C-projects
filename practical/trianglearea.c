#include <stdio.h>
int main()
{
    float h ,b ,a ;
    printf("Enter the Height of triangle:\n");
    scanf("%f",&h);
    printf("Enter the base of triangle:\n");
    scanf("%f",&b);
    a=(h*b)/2;
    printf("Area of Tringle is %0.1f",a);
    return 0;
}
