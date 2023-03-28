#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,sum,sub,mul,mod;
	float div;
	p1=&a;
	p2=&b;
	printf("enter any two value");
	scanf("%d %d",p1,p2);
	sum= *p1 + *p2;
	printf("sum is=%d\n",sum);
	sub= *p1 - *p2;
	printf("sub is=%d\n",*p1 - *p2);
	mul= (*p1) * (*p2);
	printf("mul is=%d\n",mul);
	div =(*p1)/(*p2);
	printf("div is= %f\n",div);
	mod= (*p1) % (*p2);
	printf("mod is=%d",mod);
	
	
	
	
}
