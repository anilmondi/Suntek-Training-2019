/*Program to convert days to years weeks and days using another logic*/
#include<stdio.h>
void main()
{
	int days ,weeks, years;
	printf("enter days :");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=(days%365)%7;
	printf("%d years  ",years);
	printf("%d weeks ",weeks);
	printf("%d days ",days);
}
