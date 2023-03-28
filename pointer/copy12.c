#include<stdio.h>
int main()
{
	int n,a[n],b[n],i,*p;
	printf("enter size array");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		printf("array value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			b[i]=*p;
			printf("copyed value b[%d]=%d\n",i,*p);
			p++;
	}
	
}
