#include<stdio.h>
int main()
{
	int n[5],i;

	for(i=0;i<5;i++)
	{
		printf("enter element:n[%d]",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d", n[i]);
	}
}
