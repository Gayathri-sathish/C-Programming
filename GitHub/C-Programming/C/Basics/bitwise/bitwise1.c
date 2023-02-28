#include<stdio.h>
int main()
{
	int a;
	printf("enter number to check least significant bit");
	scanf("%d",&a);
	if(a&6)
	{
		printf("last bit set");
	}
	else
	{
		printf("last bit not set");
	} 	
}
