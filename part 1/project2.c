#include <stdio.h>
int main()
{
    int vote;
    printf("Enter your age:\n");
    scanf("%d",&vote);
    printf("Your age is %d\n" ,vote);
    if (vote>=18)
    {
        printf("you can vote;)");

    }
    else if (vote>=13)
    {
        printf("you are a teenager you cannot vote!");

    }
    else if (vote<=12&&vote>0)
    {
        printf("you are just a kid! Go Watch Pogo");
        
    }
    else
    {
        printf("your input is invaild....");
    }
    

    return 0;
}
