#include <stdio.h>
int main()
{
    int a, b;
    b = 0;
    printf("Enter the number you want to multiply:\n");
    scanf("%d", &a);
    printf("table of %d\n", a);
    do
    {
        b++;
        printf("%d * %d = %d\n", a, b , a * b);

    } while (b < 10);

    return 0;
}