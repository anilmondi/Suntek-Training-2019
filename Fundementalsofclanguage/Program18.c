/*Program to convert temperature from celcius to fahrenheit*/
#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temperature in celcius :");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("%.2f celcius = %.2f fahrenheit",c,f);
	return 0;
}

