#include <stdio.h>
int main()
{
    char a;
    printf("If you want to run multiplication table in do while loop enter a\n");
    printf("If you want to run multiplication table in while loop enter b\n");
    printf("enter here: ");
    scanf("%c", &a);
    if (a == 'a')
    {
        int b, table, i = 1;
        printf("Multiplication table in do while loop.........\n");
        printf("enter a number you want the table of:\n");
        scanf("%d", &table);
        do
        {
            b = table * i;
            printf("%d X %d = %d\n", table, i, b);
            i++;

        } while (i <= 10);
    }
    else if (a == 'b')
    {
        int b, table, i = 1;
        printf("Multiplication table in while loop.........\n");
        printf("enter a number you want the table of:\n");
        scanf("%d", &table);
        while (i <= 10)
        {
            b = table * i;
            printf("%d X %d = %d\n", table, i, b);
            i++;
        }
    }
    else
    {
        printf("your input in invaild..........");
    }
    return 0;
}
