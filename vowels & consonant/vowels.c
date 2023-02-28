#include<stdio.h>
void main()
{
	char alphabet;
	printf("enter alphabet");
	scanf("%d",&alphabet);
	if(alphabet >= 65 && alphabet<= 90)
	{
		printf("%c is capital",alphabet);
	}
	else if(alphabet>='97' && alphabet<= 122)
	{
		printf("%c is small",alphabet);
	}
	else
	{
		printf("%c both are not match",alphabet);
	}
	
}
