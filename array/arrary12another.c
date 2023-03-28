#include<stdio.h>
int main()
{
	int n,i,a[100],b[100];
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
    {
    	b[i]=a[i];
	}
printf("enter original value:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	}
	printf("\ncopyed value:\n");
		for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);	
	}
	
}
