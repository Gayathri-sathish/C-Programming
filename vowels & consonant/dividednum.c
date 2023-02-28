#include<stdio.h>
void main()
{
	int week ;
	printf("enter week number(1-7):");
	scanf("%d",&week);
	if(week==1)
	{
		printf("monday",week);
	}
	else if(week==2)
	{
		printf("tuseday",week);	
	}
	else if(week==3)
	{
		printf("wednesday",week);
	}
	else if(week==4)
	{
		printf("thursday",week);
	}
	else if(week==5)
	{
		printf("friday",week);
	}
	else if(week==6)
	{
		printf("saturday",week);
	}
	else if(week==7)
	{
		printf("sunday",week);
	}
	else
	{
		printf("this is not weekday ");
	}
	
}
