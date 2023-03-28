#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("enter the value of arrary a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	   }
	}
	for(i=0;i<3;i++)
	{
			printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
	}
}
