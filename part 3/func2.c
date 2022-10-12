#include <stdio.h>
 void Sum(int a,int b)
{ 

    int z;
	z=a*b; 
    printf("a X b = %d",z);
	
} 
int main()
{
	int a,b;
	printf("Enter no. 1 : \t"); 
	scanf("%d",&a); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&b ); 
    Sum(a,b);
    return 0;
}
