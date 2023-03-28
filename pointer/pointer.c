#include<stdio.h>
int main()
{
	int a=5;
	int*point;
	point=&a;
	printf("a= %d\n",a);
	printf("&a= %d\n",&a);
	printf("point= %d\n",point);
	printf("*point= %d",*point);
}
