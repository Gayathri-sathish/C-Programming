/*profit loss */
#include<stdio.h>
void main()
{
	int cp,sp,amt;
	printf("enter cost price:");
	scanf("%d",&cp);
	printf("enter selling price:");
	scanf("%d",&sp);
	if(sp>cp)
	{
	amt=sp-cp;
	printf("profit= %d",amt);
	}
	else if(cp>sp)
	{
	amt=cp-sp;
	printf("loss= %d",amt);
	}
	else
	{
		printf("no profit no loss");
	}

}

