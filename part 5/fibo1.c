#include <stdio.h>
int main()
{
    char f;
    printf("ENter a if you start fibonacci series with 0: \n");
    printf("ENter b if you start fibonacci series with 1: \n");
    scanf("%c", &f);
    if (f == 'a')
    {
        int a, d;
        printf("Enter how many number of fibonacci series you want: ");
        scanf("%d", &a);
        printf("fibonacci starting with 0 .....\n");
        int b = -1;
        int c = 1;
        for (int i = 1; i <= a; i++)
        {
            d = b + c;
            printf("%d\n", d);
            b = c;
            c = d;
        }
    }
    else if (f = 'b')
    {
        int a, d;
        printf("Enter how many number of fibonacci series you want: ");
        scanf("%d", &a);
        printf("fibonacci starting with 1 .....\n");
     int b=1;
     int c=0;

    for (int i = 1; i <= a; i++)
        {
            d = b + c;
            printf("%d\n", d);
            b = c;
            c = d;
        }
    }
    else
    {
       printf("your input is invaild.......");
    }
    
    return 0;
}
