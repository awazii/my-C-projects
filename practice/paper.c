#include <stdio.h>
int main()
{
    int a ,b ,c,i;
    b=0;
    printf("Enter the first value:\n");
    scanf("%d",&a);
    printf("Enter the second value:\n");
    scanf("%d",&c);
    for (i = 1; i <=c; i++)
    {
        b+=a;
    }
    for (int j= 1; j < c; j++)
    {
        printf("%d+",a);
    }
    
    printf("%d(%dtimes)=%d\n",a,c,b);  
    return 0;
}
