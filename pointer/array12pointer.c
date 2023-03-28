#include<stdio.h>
int main()
{
	int a[100],b[100],*p1,*p2,n,i;
	
	printf("enter size of array");
	scanf("%d",&n);
	p1=&a;
	p2=&b;
	
	for(i=0;i<n;i++)
	{
		printf("enter the element",i,n);
		scanf("%d",&p1+i);
	}
	for(i=0;i<n;i++)
    {
		printf("enter the element",i);
		scanf("%d",&p2+i);
	}
	for(i=0;i<n;i++)

		*(p1+i) = *(p2+i);
		
	printf("after cpoy array %d",p1,p2);
}
