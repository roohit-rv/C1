#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter twoo numbers\n");
	scanf(" %d %d", &a,&b);
	c=a>b;
	printf("%d\n",c);
	c=a<b;
	printf("%d\n",c);
	c=a<=b;
	printf("%d\n",c);
	c=a>=b;
	printf("%d\n",c);
	c=a==b;
	printf("%d\n",c);
	c=a!=b;
	printf("%d\n",c);
	return 0;
}
