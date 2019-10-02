/*Program to convert days to years weeks and days */
#include<stdio.h>
void main()
{
	int days ,years ,weeks;
	printf("enter days :");
	scanf("%d",&days);
	years=days/365;
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	printf("%d Years  ",years);
	printf("%d weeks  ",weeks);
	printf("%d days  ",days);
}
