#include<stdio.h>
int main()
{
	int num1,num2,larg;
	printf("enter two numbers");
	scanf("%d %d",&num1,&num2);
	larg=num1>=num2?num1:num2;
	printf("%d",larg);
	
}
