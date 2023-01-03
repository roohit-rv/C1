#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("write a number for it's factorial\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=i*f;
		
	}
	printf("factorial is %d\n",f);
	return 0;
}
