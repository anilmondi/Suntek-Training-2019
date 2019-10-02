/*Program to convert temperature from degree centigrade to Fahrenheit*/
#include<stdio.h>
void main()
{
	float c,f;
	printf("enter temperature in centigrade :");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("Temperature in Fahrenheit :%f",f);
}
