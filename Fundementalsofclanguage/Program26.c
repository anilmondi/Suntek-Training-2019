/*Program to calculate average and percentage of 5 subjects*/
#include<stdio.h>
void main()
{
	float a,b,c,d,e;
	float total,avg,pc;
	printf("enter 5 subkects marks :");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	avg=total/5.0;
	pc=(total/500.0)*100;
	printf("Total marks are : %f\n",total);
	printf("Average Marks are: %f\n",avg);
	printf("Percentage of Marks is :%f",pc);
}
