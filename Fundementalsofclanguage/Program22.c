/*Program to convert centimeter to meter and Kilometer*/
#include<stdio.h>
void main()
{
	float c,m,k;
	printf("enter length in centimeter :");
	scanf("%f",&c);
	m=c/100.0;
	k=c/100000.0;
	printf("The length in meters is :%f\n",m);
	printf("The length in kilometers is :%f",k);	
}
