#include<stdio.h>
int main()
{
	char ch;
	printf("enter any alphabet\n");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("it is uppercase\n");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("it is lowercase\n");
	}
	else
	{
		printf("enter valid input\n");
	}
	return 0;
}
