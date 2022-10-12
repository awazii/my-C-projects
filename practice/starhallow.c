#include <stdio.h>
int main()
{
    int i,j,k,s,a,b;
    k=1;
    printf("Enter the row of pyramid:\n");
    scanf("%d",&a);
    for ( i = 1; i <=a; i++)
    {
        for ( s = 1; s <=(a-i); s++)
        {
           printf(" ");
        }
       for ( j = 1; j <=k; j++)
       {
        if (j==1 || j==k)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
       }
       k+=2;
       printf("\n");
    }
    k-=2;
     for ( i = a; i>=1; i--)
    {
        for ( s = 1; s <=(a-i); s++)
        {
           printf(" ");
        }
       for ( j = k; j >=1; j--)
       {
        if (j==k || j==1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
       }
       printf("\n");
       k-=2;
    
    }
   
    return 0;
}