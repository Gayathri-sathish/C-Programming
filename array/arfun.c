#include<stdio.h>
void arrument(int arr[]);
int main()
{
int arr[5],i;
//printf("enter size of the array:");
//scanf("%d",&n);	
//printf("all negative ellament in array:");
for(i=0;i<5;i++)
{
	scanf("%d",arr[i]);
}
arrument( arr[5]);
void arrument(int arr[5])
{
for(i=0;i<5;i++)
{
	if(arr[i]<0)
	printf("%d ",arr[i]);
}
}


