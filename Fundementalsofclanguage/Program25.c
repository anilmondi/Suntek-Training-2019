/*Program to find power of number using pow function*/
#include<stdio.h>
#include<math.h>
void main()
{
	double x,y,power;
	printf("Enetr base:");
	scanf("%lf",&x);
	printf("Enter exponent:");
	scanf("%lf",&y);
	power=pow(x,y);
	printf("x^y =%.2lf\n",power);
}
