#include<stdio.h>
int main()
{
	int t1=0,t2=1,n,trm,i;
	printf("enter the number of terms to print for fibonacci series\n");
	scanf("%d",n);
	printf("fibonacci series upto terms");
	for(i=3;i<=n;i++)
	{
		trm=t1+t2;
		printf("%d,",trm);
		t1=t2;
		t2=trm;
	}
	return 0;
}



