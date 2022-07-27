#include<stdio.h>
#include<conio.h >
void main()
{
	int phy,bio,match,eco,eng;
	float per;
	clrscr();
	printf("enter the five sbj mark");
	scanf("d%d%d%d%d%",&phy,&bio,&match,&eco,&eng);
	per=(phy+bio+match+eco+eng)/5;
	printf("percentage is %f\n",per);
	if(per>=75)
	{
		printf("distinction");

	}
	else if(per>=60)
	{
		printf("first class");
	}
	else if(per>=50)
	{
		printf("second class");

	}
	else if(per>=35)
	{
		printf("pass class");

	}
	else
	{

		printf("fail");
	}
	getch();
}
