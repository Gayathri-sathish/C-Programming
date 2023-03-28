#include<stdio.h>
int main()
{
	int i,a[100],size;
	printf("enter any size:");
	scanf("%d",&size);
for(i=0;i<size;i++)
{
	printf("enter a[%d]",i);
		scanf("%d",&a[i]);
}
for(i=size-1;i>=0;i--)
{
	printf("%d ",a[i]);
}
}
