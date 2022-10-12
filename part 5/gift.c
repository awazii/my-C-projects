#include <stdio.h>
int main()
{
    char rewards;
    printf("Hello students:\n");
    printf("Enter a if you pass both maths and science exam:\n");
    printf("Enter b if you pass science exam:\n");
    printf("Enter c if you pass maths exam:\n");
    printf("Enter here:\n");
    scanf("%c",&rewards);
    if (rewards=='a')
    {
        printf("Congratulation you won 45Rs...");
    }
    else if (rewards=='b')
    {
        printf("Congratulation you won 15Rs...");
    }
    else if (rewards=='c')
    {
        printf("Congratulation you won 15Rs...");
    }
    else
    {
      printf("GANDO MASTYA NA KAR...");
    }
    return 0;
}
