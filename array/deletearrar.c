#include<stdio.h>
int main()
{
	int i,a[100],size,n,pos;
	printf("enter size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter the position to delete:");
	scanf("%d",&pos);
	for(i=pos-1;i<size-1;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<size-1;i++)
	{
		printf("%d ",a[i]);
	}
}
