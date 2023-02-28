#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter any two number");
	scanf("%d %d",&num1,&num2);
	
	switch(num1<num2)
	{
	
	case 0:
		printf("%d maximum ",num1);
		break;
	case 1:
		printf("%d not maximum ",num2);
		break;
	default:
		printf("invalued input");
	}
}
