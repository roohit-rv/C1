//add and subtract two numbers with argument and without return type
#include<stdio.h>
void add(int a, int b);
void sub(int c, int d);
int main()
{
	int p=10, q=5;
	add(p,q);
	sub(p,q);
	return 0;
}
void add(int a, int b)
{
	int sum=a+b;
	printf("addition is %d\n",sum);
  
}
void sub(int c, int d)
{
	int subtract=c-d;
	printf("subtraction is %d\n",subtract);

}

