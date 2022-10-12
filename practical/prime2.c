#include <stdio.h>
int main()
{
    int a,j,b,i;
    b=2;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("Prime numbers that are less than %d are:\n",a);
    for ( i = a-1; i >=b;i--)
    {
        for (j = 2; j <= i;j++)
        {
            if (i%j==0)
            {
                break;
            }  
        }
        if (j==i)
        {
            printf("%d\n",i);
        }
        
        
    }
    

    
    return 0;
}
