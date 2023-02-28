#include<stdio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	
	switch(num>0)
	{
	
	case 1:
		printf("%d positive",num);
		break;
	case 0:
		switch(num<0)
		{
		case 1:
				printf("%d negative",num);
				break;
		case 0:
			    printf("%d zero",num);
			    break;
	}
	break;
	}
}
