
#include<stdio.h>
int main()
{
float radius,diameter,circumference,area;
printf("enter the radius of circle:");
scanf("%f",&radius);
diameter=2* radius;
circumference=2*3.14*radius;
area=3.14*(radius*radius);
printf("diameter of  circle =%.2f sp units\n",diameter);
printf("circumference of circle=%.2f sp units\n",circumference);
printf("area of circle=%.2f\n",area);
	}
