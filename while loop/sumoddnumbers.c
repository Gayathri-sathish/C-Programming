/* print all  sum odd numbes  1 to 10*/
#include<stdio.h>
int main()
{
  int i,sum=0;
  i=1;
 while(i<=10)
  {
  	if(i%2!=0)
	{
		sum = sum+i;
	}
	i++;	
  }
  printf("%d",sum);
}
