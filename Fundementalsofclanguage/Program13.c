/*Program to calculate area of Right angle Triangle*/
#include<stdio.h>
void main()
{
	int base,height;
	float area;
	printf("enter base and height of Right angle Triangle :");
	scanf("%d%d",&base,&height);
	area=0.5*base*height;
	printf("Area of Right angle Triangle is : %f",area);
}
