/*Program to calculate Compound Interest*/
#include<stdio.h>
#include<math.h>
void main()
{
	float p,t,r,ci;
	printf("enter principle (amount):\n");
	scanf("%f",&p);
	printf("enter time :\n");
	scanf("%f",&t);
	printf("enter rate :\n");
	scanf("%f",&r);
	ci=p*(pow( (1+r/100) ,t)-1);
	printf("Compound Interest is :%f",ci);
}
