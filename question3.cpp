//check wether the given year is leap year or not
#include<stdio.h>
int main()
{
	int n;
	printf("enter any year\n");
	scanf("%d",&n);
	if(n%4==0)
	{
		printf("it is a leap year\n");
	}
	else
	{
		printf("it is not a leap year\n");
	}
	return 0;
}
