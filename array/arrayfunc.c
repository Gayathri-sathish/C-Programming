#include<stdio.h>
void my_function(int a[],int n);
int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	my_function(a,n);
}
void my_function(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	
	printf("%d ",a[i]);
}
