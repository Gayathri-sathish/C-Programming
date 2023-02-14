/* maximum of two numbers*/
#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("enter any two number:");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		max=num1;
    }
    else 
        max=num2;
    {
    	printf("the number is maximum : %d",max);
   }
}

