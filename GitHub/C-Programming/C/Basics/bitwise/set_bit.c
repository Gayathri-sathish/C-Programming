#include<stdio.h>
void main()
{
	int bit,num,ans;
	printf("enter number");
	scanf("%d",&num);
	printf("enter bit");
	scanf("%d",&bit);
	ans = num|(1<<bit);
	scanf("%d",ans); 
}
