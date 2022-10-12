#include <stdio.h>
int main()
{
    int a;
    for (int i = 1; i <= 10; i++)
    {
        printf("enter the number:\n");
        scanf("%d", &a);
        if (a > 45)
        {
            if (a == 69)
            {
                printf("69 is my favorite so i let you continue:)\n");
                continue;
            }
            else if (a == 76)
            {
                goto a;
            }

            break;
        }
    }
    printf("loop is break\n");
    if(a==76){
    a:
        printf("you use 76");}


    return 0;
}
