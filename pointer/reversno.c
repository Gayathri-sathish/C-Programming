#include<stdio.h>
int main()
{
	int n[5]={1,2,3,4,5},i,*p;
	p=&n[4];
	for(i=0;i<5;i++)
	{
		printf("%d\n",*p);
		p--;
	}
}
