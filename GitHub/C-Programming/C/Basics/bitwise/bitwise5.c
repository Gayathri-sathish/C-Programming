#include<stdio.h>
int main()
{
  int num,n,newnum;
  printf("enter any number");
  scanf("%d",&num);
  printf("enter nth bit to toggle(0-31):");
  scanf("%d",&n);
  newnum = num^(1<<n);
  printf("bit cleared successfully.\n\n");
  printf("number before clearing %d toggle:%d(in decimal)\n",n,num);
  printf("number after clearing %d toggle;%d(in decimal)\n",n,newnum);
   
}
