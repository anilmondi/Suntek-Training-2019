/*Program to convert temperature from Fahrenheit to Celcius*/
#include<stdio.h>
void main()
{
	float c,f;
	printf("enter temperature in Fahrenheit : ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("%.2f fahrenheit = %.2f celcius",f,c);
}
