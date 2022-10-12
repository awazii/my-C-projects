#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("\n Enter the two no. in between you want to check:");
    scanf("%d%d",&a,&b);
    printf("%d-%d\n",a,b);
    //for(j=a;j<=c;j++)
    while(a<=b)
    {
        i=2;
        j=0;
        while(i<=b)
        {
            if(a%i==0)
            {
                j++;
            }
            i++;
        }
        if(j==1)
        {
            printf("\nPrime number:%d\n",a);
        }
        else
        {
            printf("\n\tNot prime:%d\n",a);
        }
        a++;
    }
}