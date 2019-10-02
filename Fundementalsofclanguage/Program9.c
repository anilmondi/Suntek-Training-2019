/*Program to find Area and Circumference of Circle*/
#include<stdio.h>
void main()
{
	int r;
	float pi=3.14,area,cf;
	printf("enter radius of Circle :");
	scanf("%d",&r);
	area=pi*r*r;
	printf("Area of Circle :.2%f",area);
	cf=2*pi*r;
	printf("Circumference of Circle :%.1f",cf);
}
