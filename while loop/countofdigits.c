#include<stdio.h>
void main()
{
	int num,count = 0;
	printf("enter number");
	scanf("%d",&num);
	while(num>0)
	{
		num = num/10;
		count++;
	}
	printf("digits : %d",count);
}
