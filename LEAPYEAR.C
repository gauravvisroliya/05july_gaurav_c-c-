#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("enter a year:");
	scanf("%d",&year);
	if(year%100==0)
	{
		printf("year is leap year");
	}
	else if(year%100==0)
	{
		printf("year is not leap year");
	}
	else if(year%4==0)
	{
		printf("year is leap year");
	}
	else
	{
		printf("year is not leap year");
	}
	getch();
}