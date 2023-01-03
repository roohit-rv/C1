#include<stdio.h>
int main()
{
	int i,j,a[2][3];
	printf("enter the elements of the matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}
