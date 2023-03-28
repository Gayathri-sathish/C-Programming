#include<stdio.h>
int main()
{
	int n[1000],i,count=0,a;
	printf("array size is:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("enter n[%d]\n",i);
		scanf("%d",&n[i]);
	}
	printf("negative number is:");
	for(i=0;i<a;i++)
	{
		if(n[i]<0)
		{
			count++;
		}
		
	}
	printf("%d",count);
	
}
