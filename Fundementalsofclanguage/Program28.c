/*Arithematic series with starting and ending numbers to find summation and difference*/
#include<stdio.h>
void main()
{
	float n,a1,an,d;
	float sn;
	printf("enter how many terms :");
	scanf("%f",&n);
	printf("enter first term :"),
	scanf("%f",&a1);
	printf("enter last term :");
	scanf("%f",&an);
	sn=(n*(a1+an))/2;
	printf("summation is : %f\n ",sn);
	d=sn/n;
	printf("difference is :%f",d);
}
