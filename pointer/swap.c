#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("enter two number a and b:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("swaping no is a=%d \n b=%d",a,b);
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
