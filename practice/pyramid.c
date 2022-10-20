#include<stdio.h>
int main()
{
    char pattern;
    printf("Enter a if you want this type of pattern\n");
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("Enter b if you want this type of pattern\n");
    printf(" *****\n");
    printf("  ***\n");
    printf("   *\n");
    printf("enter c if you want this type of  pattern:\n");
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("*******\n");
    printf("*******\n");
    printf(" *****\n");
    printf("  ***\n");
    printf("   *\n");
    printf("Enter here:\n");
    scanf("%c",&pattern);
    if (pattern =='a')
    {
       int i,j,k,s,a;
    k=1;
    int b,c,d;
        b=-1;
        c=1;
    printf("Enter the row of pyramid:\n");
    scanf("%d",&a);
    for ( i = 1; i <=a; i++)
    {
        for ( s = 1; s <=(a-i); s++)
        {
           printf(" \t");
        }

        for ( j= 1; j<=k; j++)
        {
            d=b+c;
            printf("%d\t",d);
            b = c;
            c = d;
        }
        printf("\n");
        k+=2;  
        
    } 
    }
    else if (pattern=='b')
    {
        int a,b,i,j;
        b=1;
        printf("Enter the row of pyramid:\n");
        scanf("%d",&a);
        for (int l = 1; l < a; l++)
        {
            b+=2;
        }
        for ( i = a; i >=1; i--)
    {
        for ( int s = 1; s <=(a-i); s++)
        {
           printf(" \t");
        }
        
        for ( j= 1; j<=b; j++)
        {
            printf("*\t");
        }
        printf("\n");
         b-=2;
    }
    }
    else if (pattern=='c')
    {
    int i,j,k,s,l,a;
    k=1;
    printf("Enter the row of pyramid:\n");
    scanf("%d",&a);
    for ( i = 1; i <=a; i++)
    {
      //  printf("\t");
        for ( s = 1; s <=(a-i); s++)
        {
           printf(" ");
        }
        
        for ( j= 1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
        k+=2;  
    }
    l=k-2;
    for ( i = a; i >=1; i--)
    {
      //  printf("\t");
        for ( s = 1; s <=(a-i); s++)
        {
           printf(" ");
        }
        
        for ( j= 1; j<=l; j++)
        {
            printf("*");
        }
        printf("\n");
        l-=2;  
    }
    }
    else
    {
        printf("Your input is invaild.....");
    }
    return 0;

}
