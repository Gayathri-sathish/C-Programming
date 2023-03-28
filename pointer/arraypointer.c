#include<stdio.h>
int main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int *p,i;
	p=&a[0];
	for(i=0;i<8;i++)
	{
		printf("%d\n",*(p+i));
	}
	
}
