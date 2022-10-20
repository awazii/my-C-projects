#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the rows size: ");
    scanf("%d", &a);
    printf("enter the column size: ");
    scanf("%d", &b);
    int matrics[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter the value of row(%d)  colomn(%d): ", i + 1, j + 1);
            scanf("%d", &matrics[i][j]);
        }
    }
    printf("\n\n\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", matrics[i][j]);
        }
        printf("\n");
    }
    return 0;
}
