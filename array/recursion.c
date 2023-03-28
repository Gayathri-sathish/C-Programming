#include<stdio.h>
int main()
{
	int n[5],i,sum=0;
	printf("enter array element:n[%d]");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
	    sum=sum+n[i];
   }
   printf("sum is:%d",sum);
	
}
