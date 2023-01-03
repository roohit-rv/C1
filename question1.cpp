/*to check wether a student is pass or fail,
he/she will pass if total percentage he scored in maths, physics and chemistry 
is more than 40 percent and in each subject he scored more than 33 percent
otherwise he will be failed*/
#include<stdio.h>
int main()
{
	float maths, physics, chemistry;
	printf("enter your physics percentage\n");
	scanf("%f",&physics);
	printf("enter your maths percentage\n");
	scanf("%f",&maths);
	printf("enter your chemistry percentage\n");
	scanf("%f",&chemistry);
	float total=(physics+maths+chemistry)/3;
	if((total<40)||(maths<33)||(physics<33)||(chemistry<33))
	{
		printf("you are failed looser\n");
	}
	else 
	{
		printf("congrats you are pass, now new challenges ahead\n");
	}
	return 0;	
	
}
