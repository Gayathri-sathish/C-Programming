#include<stdio.h>
int main()
{
	int n[5],i,max,min;
	printf("enter any number:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&n[i]);
    }
    max=n[0];
    for(i=0;i<5;i++)
    {
    	if(n[i]>max)
    	max=n[i];
   min=n[0];
    }
    for(i=0;i<5;i++)
    {
    	if(n[i]<min)
    	min=n[i];
    }
	 	printf("this maxium %d\n",max);
	 	printf("this is minimum %d",min);
}
