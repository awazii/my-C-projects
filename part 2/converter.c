#include <stdio.h>
int main()
{
    char a;
    printf("Enter a if you want to convert celsius to fahrenheit.\n");
    printf("Enter b if you want to convert fahrenheit to celsius.\n");
    printf("Enter c if you want to convert pounds to kilogram.\n");
    printf("Enter d if you want to convert mile to kilometer.\n");
    scanf("%c", &a);
    if (a == 'a')
    {
        float a;
        printf("enter celsius:\n");
        scanf("%f", &a);
        printf("fahrenheit is %0.2f", a * 1.8 + 32);
    }
    else if (a == 'b')
    {
        float a;
        printf("enter fahrenheit:\n");
        scanf("%f", &a);
        printf("celsius is %0.2f", (a - 32) * 5 / 9);
    }
    else if (a == 'c')
    {
        float a;
        printf("enter pounds:\n");
        scanf("%f", &a);
        printf("kilogram is %0.2f", a / 2.2046);
    }
    else if (a == 'd')
    {
        float a;
        printf("enter mile:\n");
        scanf("%f", &a);
        printf("kilometer is %0.2f", a * 1.609344);
    }
    else
    {
        printf("your input is unvaild!");
    }
    return 0;
}