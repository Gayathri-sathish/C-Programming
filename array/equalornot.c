#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,count =0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				count++;
			}
		}
	}
	if(count == 0)
	{
		printf("equal matrix",i,j);
	}
	else
	{
		printf("not equal matrix",i,j);
	}
}
