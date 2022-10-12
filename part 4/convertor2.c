#include <stdio.h>

int main()
{
    char a;
    printf("Hello Everyone:\n");
    printf("Enter a if you want to convert kilometers into miles.\n");
    printf("Enter b if you want to convert Centimeters into Inches.\n");
    printf("Enter c if you want to convert inches into foot.\n");
    printf("Enter d if you want to convert pounds into kilogram.\n");
    printf("Enter e if you want to convert inches into meters.\n");
    printf("Enter q if you want to Exit the Program.\n");
    printf("Enter here:\n");
    scanf("%c",&a);
    if (a=='1')
    {
        float a;
        printf("Enter kilometers:\n");
        scanf("%f",&a);
        printf("Miles is %0.3f",a*0.6214);
    }
    else if (a=='b')
    {
        float a;
        printf("Enter Centimeter:\n");
        scanf("%f",&a);
        printf("inches is %0.3f",a* 0.3937);
    }
    else if (a=='c')
    {
        float a;
        printf("Enter inches:\n");
        scanf("%f",&a);
        printf("foot is %0.2f",a/12);
    }
    else if (a=='d')
    {
        float a;
        printf("Enter pounds:\n");
        scanf("%f",&a);
        printf("kilogram is %0.2f",a/ 2.2046);
    }
    else if (a=='e')
    {
        float a;
        printf("Enter inches:\n");
        scanf("%f",&a);
        printf("meters is %0.3f",a*0.0254);
    }
    else if (a=='q')
    {
       printf("exiting the program.....");
    }
    else
    {
        printf("Your input is unvaild!");
    }
    
    
    
    
    
    return 0;
}
