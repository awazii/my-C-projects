#include <Stdio.h>
int main()
{
    char chose;
    for (int i = 1; i = 1; i++)
    {
        printf("\tEnter a if you want to convert kilometers into miles.\n");
        printf("\tEnter b if you want to convert Centimeters into Inches.\n");
        printf("\tEnter c if you want to convert inches into foot.\n");
        printf("\tEnter d if you want to convert pounds into kilogram.\n");
        printf("\tEnter e if you want to convert inches into meters.\n");
        printf("\tEnter q if you want to Exit the Program.\n\n");
        printf("Enter here:\n");
        scanf(" %c", &chose);
        if (chose == 'a')
        {

            float a;
            printf("Enter kilometers:\n");
            scanf("%f", &a);
            printf("Miles is %0.3f\n\n\n", a * 0.6214);
        }
        else if (chose == 'b')
        {
            float a;
            printf("Enter Centimeter:\n");
            scanf("%f", &a);
            printf("inches is %0.3f\n\n\n", a * 0.3937);
        }
        else if (chose == 'c')
        {
            float a;
            printf("Enter inches:\n");
            scanf("%f", &a);
            printf("foot is %0.2f\n\n\n", a / 12);
        }
        else if (chose == 'd')
        {
            float a;
            printf("Enter pounds:\n");
            scanf("%f", &a);
            printf("kilogram is %0.2f\n\n\n", a / 2.2046);
        }
        else if (chose == 'e')
        {

            char b;
            float a;
            printf("Enter inches:\n");
            scanf("%f", &a);
            printf("meters is %0.3f\n\n\n", a * 0.0254);
        }
        else if (chose == 'q')
        {
            printf("quiting the program......\n");
            break;
        }
        else
        {
            printf("your input is invalid.....\n\n\n");
        }
        }
    return 0;
}
