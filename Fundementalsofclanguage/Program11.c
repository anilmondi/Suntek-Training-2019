/*Program to calculate Area of Scalene Triangle*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,angle;
	float area,pi=3.14;
	printf("enter side 1 : ");
	scanf("%d",&a);
	printf("enter side 2 : ");
	scanf("%d",&b);
	printf("enter include angle : ");
	scanf("%d",&angle);
	area=(a*b*sin((pi/180)*angle))/2;
	printf("Area of Scalane Triengle is : %f",area);
	return 0;
}
