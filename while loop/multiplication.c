/* print multiplication table*/
#include<stdio.h>
int main()
{
  int i,n;
  printf("enter any values:");
  scanf("%d",&n);
  i=1;
 while(i<=10)
  {
  	printf("%d*%d=%d\n",n,i,n*i);
	i++;	
  }
  
}
