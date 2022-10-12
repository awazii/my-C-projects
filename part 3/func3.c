#include <stdio.h>
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many line of star pattern you want to print: \n");
	scanf("%d", &a ); 
	for (int i = 1; i<=a; i++) 
	{
		for (int j = 1; j <=i; j++)
		{
			printf("*\t");
		}
		printf("\n"); 
	} 
} 
int main()
{
    Star_pattern() ;
    return 0;
}
