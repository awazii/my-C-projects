#include <stdio.h>
 void printstar(int n)
{
    char a;
    a='*';
    for(int i = 0; i < n; i++)
    {
         printf("%c\n", a);

    } 
    
}


int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
int sum()
{
    int i;
    int j;
    printf("enter a number:\n",i);
    scanf("%d",&i);
    printf("enter a number:\n",i);
    scanf("%d",&j);
    return i+j;
}
int main()
{
    int a, b, c,d;
    printstar(6);
    c = takenumber();
    printf("The number entered is %d \n", c);
    d= sum();
    printf("The sum is %d \n", d);
    return 0;
}

