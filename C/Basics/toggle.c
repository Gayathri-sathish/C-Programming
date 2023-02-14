// toggle nth bit//
#include<stdio.h>
int main()
{
	int n,pos;
	printf("enter any number:");
	scanf("%d",&n);
	printf("enter the bit position to tonggle:");
	scanf("%d",&pos);
	n= (1<<pos)^n;
	printf("output: %d",n);
}
