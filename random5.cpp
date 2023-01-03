#include<stdio.h>
int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	if(age>=18&&age<=60)
	{
		printf("eligible, proceed further\n");
	}
	if (age>60)
	{
		printf("out of league :)\n");
	}
	if (age<18)
	{
		printf("not eligible\n");
	}
	return 0;
}
