#include <stdio.h>
int main()
{
    char name[30];
    char gender[6];
    char a[40];
    char b[10];
    int age;
    float height;
    printf("What is your name ?\n");
    scanf("%s", &name);
    printf("Hello %s\nhow are you?\n", name);
    scanf("%s", &a);
    printf("What is your age?:\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("ohh you are Adult now\n");
    }
    else if (age < 18 && age >= 13)
    {
        printf("So your are a teenager:)\nDo not watch porn ok\n SAY OK!!!!!\n");
        scanf("%s",&b);
        printf("Goood\n");
    }
    else if (age <= 12 && age >= 1)
    {
        printf("hey kiddoo\n");
    }

    else
    {
        printf("your age is invaild...\n");
    }
    printf("What is your height (in feet):\n");
    scanf("%f", &height);
    printf("What is your gender?:\n");
    scanf("%s", &gender);
    printf("So You are %s\n",gender);
    printf("Let me tell you about yourself:\nYour name is %s\nyour gender is %s\nyour height is %0.2f\nyour age is %d\n",name,gender,height,age);
    printf("Byeee...");
if (name=="zuzu")
{
    printf("gandoo");
}


    return 0;
}
