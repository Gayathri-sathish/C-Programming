#include<stdio.h>
int main()
{
	int year;
	printf("enter any year:");
	scanf("%d",&year);
	if((year %4 ==0)&& (year % 100!=0)||(year %400 ==0))
	{
		printf("%d leap year",year);
	}
	else
	{
		printf("%d not leap year",year);
	}
}
