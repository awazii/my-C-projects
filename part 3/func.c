#include <stdio.h>
int Sum()
{

	int x, y, z;
	printf("Enter no. 1 : \t");
	scanf("%d", &x);
	printf("\nEnter no. 2 : \t");
	scanf("%d", &y);
	z = x + y;
	return z;
}
int Sum1(int a, int b)
{
	return a * b;
}
int main()
{
	int a, b, c;
	printf("enter the value of a : \n");
	scanf("%d", &a);
	printf("enter the value of b : \n");
	scanf("%d", &b);
	printf("a X b = %d\n", Sum1(a, b));
	//c = Sum();
	printf("%d", Sum());
	return 0;
}
