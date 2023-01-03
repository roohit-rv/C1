#include<stdio.h>
int main()
{
	float income, tax=0;
	printf("enter your annual income\n");
	scanf("%f",&income);
	if(income>=250000&&income<=500000)
	{
		tax=tax+0.05*(income-250000);
		printf("your tax based on your income is %f\n",tax);
	}
	if(income>500000&&income<=1000000)
	{
		tax=tax+0.2*(income-500000);
		printf("your tax based on your income is %f\n",tax);
	}
	if(income>1000000)
	{
		tax=tax+0.3*(income-1000000);
		printf("your tax based on your income is %f\n",tax);
	}
	else
	{
		printf("you broke\n");
	}

	
	return 0;
	
}
