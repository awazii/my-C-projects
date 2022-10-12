#include <stdio.h>
int main()
{
    float a ,b;
    printf("Enter your total Marks you obtained out of 1100:\n");
    scanf("%f",&a);
    b=a/1100*100;
    if (b>80)
    {
        printf("Your grade is A+ ");
    }
    else if (b>70 && b<=80)
    {
        printf("Your grade is A ");
    }
    
    else if (b>=60&& b<=70)
    {
        printf("Your grade is B ");
    }
    else if (b>=50 && b<60)
    {
        printf("Your grade is C ");
    }
    else if (b>= 40 && b<50)
    {
        printf("Your grade is D ");
    }
    else if (b>=33 && b <40)
    {
        printf("Your grade is E ");
    }
    else if (b<33)
    {
        printf("Your grade is F ");
    }
    return 0;
}
