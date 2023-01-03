//check even and odd numbers from 0 to 10//
#include<stdio.h>
int main()
{
	int n=0;
	printf("even and od numbers from 0 to 10\n");
	while(n<=10)
	{
		if(n%2==0)
		{
			printf("%d is even number\n",n);
		}
		else
		{
			printf("%d is odd number\n",n);
		}
		n++;
	}
	return 0;
}
