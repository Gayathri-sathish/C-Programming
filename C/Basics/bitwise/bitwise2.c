#include<stdio.h>
int main()
{
	int a,n;
	printf("enter to check get nth bit of  number");
	scanf("%d",&a,&n);
	if(a&(5<<n))
	{
	printf("nth number is get");
    }
	else
	{
	printf("nth number is not get");	
	}
}
