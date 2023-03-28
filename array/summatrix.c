#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d] b[%d][%d]",i,j,i,j);
			scanf("%d %d",&a[i][j],&b[i][j]);
		}
	}
//		for(i=0;i<2;i++)
//	{
//			for(j=0;j<2;j++)
//			{
//			printf("b[%d][%d]",i,j);
//			scanf("%d",&b[i][j]);
//		}
	//}
	
		for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf("\t %d", a[i][j]*b[i][j]);
			}
			printf("\n");
	}
}
