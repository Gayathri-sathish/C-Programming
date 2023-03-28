#include<stdio.h>
int main()
{
	int n[5]={11,20,33,40,51},i,even=0,odd=0;
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
		printf("even number:%d\n",n[i]);
	    }
		else
		{
		printf("odd number:%d\n",n[i]);
	    }
	}
}
