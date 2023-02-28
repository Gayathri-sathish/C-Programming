#include<stdio.h>
int main()
{
	int month;
	printf("enter any month number(1-12)");
	scanf("%d",&month);
	
	switch(month)
	{
	
	case 1:
		printf("%d jan",month);
		break;
	case 2:
		printf("%d feb",month);
		break;
	case 3:
		printf("%d mar",month);
		break;
	case 4:
		printf("%d apr",month);
		break;
	case 5:
		printf("%d may",month);
		break;
	case 6:
		printf("%d jun",month);
		break;
	case 7:
		printf("%d jul",month);
		break;
	case 8:
		printf("%d aug",month);
		break;
	case 9:
		printf("%d sep",month);
		break;
	case 10:
		printf("%d oct",month);
		break;
	case 11:
		printf("%d nov",month);
		break;
	case 12:
		printf("%d dec",month);
		break;
	default:
		printf("invalued input");
	}
}
