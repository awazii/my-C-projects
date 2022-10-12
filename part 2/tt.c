#include <stdio.h>
int main()
{
    int i,j;
    //j=0;
    printf("enter a number:\n");
    scanf("%d",&i);
    for ( j= 0; j<i  ; j++)
    {
        printf("%d\n",j+1);
    }
    

    return 0;
}
