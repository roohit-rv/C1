#include<stdio.h>
int main()
{
	int n,i=10,f;
	printf("write the number for the multiplication table\n");
	scanf("%d",&n);
	do
	{
		f=n*i;
		printf("%d\n",f);
		i--;
	}while(i>=1);
	return 0;
}
