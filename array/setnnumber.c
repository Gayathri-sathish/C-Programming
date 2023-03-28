#include<stdio.h>
int main()
{
	int i,size,a[100],num,pos;
	printf("enter size of array:\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("enter insert number:");
	scanf("%d",&num);
	printf("enter the position: ");
	scanf("%d",&pos);
	for(i=size+1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=num;
	for(i=0;i<size+1;i++)
	{
		printf("%d ",a[i]);
	}
}
