#include<stdio.h>
int main()
{
	int n[5],i,even=0,odd=0;
	printf("enter array element");
	for(i=0;i<5;i++)
	{
	scanf("%d",&n[i]);
    }
	for(i=0;i<5;i++)
	{
		
		if(n[i]%2==0)
		{
	      even++;
	    }
		else
		{
			odd++;
		}
	}
	printf("even number %d",even);
	printf("odd number %d",odd);
	
		
}
