/*Program to calculate Area of Equilateral Triangle*/
#include<stdio.h>
#include<math.h>
void main()
{
	int side;
	float area,r;
	r=sqrt(3)/4;
	printf("enter length of side :");
	scanf("%d",&side);
	area=r*side*side;
	printf("Area of Equilateral triangle is : %f",area);
}
