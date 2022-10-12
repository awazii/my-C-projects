#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number you want table of:\n");
    scanf("%d",&a);
    for (int i = 1; i <=10; i++)
    {
        printf("%d X %d = %lu\n", a, i, a * i);
    }
    
    return 0;
}
