#include<stdio.h>
int main()
{
	char i,n,sum=0;
	printf("enter any value:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
	  //if(2%!=0)
		sum=sum+i;
    }
    	printf("sum is=%d",sum);
}
