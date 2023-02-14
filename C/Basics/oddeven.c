// set nth bit//
#include<stdio.h>
int main()
{
	int n,pos;
	printf("enter any number:");//7 from user
	scanf("%d",&n);
	printf("enter the bit position to set:",pos);
	scanf("%d",&pos);
	n=1<<pos|n;
	printf("output: %d",n);
}
