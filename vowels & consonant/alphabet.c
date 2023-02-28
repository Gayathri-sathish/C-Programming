#include<stdio.h>
void main()
{
	int num ;
	printf("enter any number:");
	scanf("%d",&num);
	if((num%2==0)||(num%4==0))
	{
		printf("%d number is divided:" ,num);
	}
	
	else
	{
		printf("%c numder is not divided:",num);
	}
	
}
