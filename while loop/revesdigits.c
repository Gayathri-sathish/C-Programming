#include<stdio.h>
int main()
{
	int n,sum=0,m;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum=sum*10+m;
		n=n/10;
	}
	printf("reversed number is = %d",sum);
}
