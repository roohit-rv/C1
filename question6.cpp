#include<stdio.h>
int main()
{
	int i,n=8,f;
	printf("multiplication table of 8 from 1 to 10 is\n");
	for(i=1;i<=10;i++)
	{
		f=n*i;
		printf("%d\n",f);
	}
	int sum=0;
	for(i=1;i<=10;i++)
	{
		f=n*i;
		sum+=f;	
		
	}
	printf("sum of all these numbers will be %d\n",sum);
	
	return 0;
}
