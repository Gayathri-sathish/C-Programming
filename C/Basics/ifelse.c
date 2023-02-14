
#include<stdio.h>
int main()
{
	char n ;
	printf("enter any number");
	scanf("%c",&n);
	if((n>=65) && (n<=90))
	{
	printf("entered number is uppercase: %d",n);
    }
    else if((n>=97) && (n<=122))
    {
    	printf("entered number is lowercase: %d",n);
   }
}

