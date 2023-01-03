//add and subtract two numbers with argument and with return type//
#include<stdio.h>
int add(int a, int b);
int sub(int c, int d);
int main()
{
	int p=10, q=5, addition, subtraction;
	add(p,q);
	sub(p,q);
	addition=add(p,q);
	printf("sum of the two numbers is %d\n",addition);
	subtraction=sub(p,q);
	printf("subtract of the two numbers is %d\n",subtraction);
	return 0;
}
int add(int a, int b)
{
	int sum=a+b;
	return sum;
}
int sub(int c, int d)
{
	int subtract=c-d;
	return subtract;
}
