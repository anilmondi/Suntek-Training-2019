#include<stdio.h>
#include<stdlib.h>
int min(int x,int y)
{
	return (x<y)?x:y ;
}
int calcAngle(double h,double m)
{
	if(h<0||m<0||h>12||m>60)
	{
		printf("wrong input");
	}
	if(h==12)
	{
		h=0;
	}
	if(m==60)
	{
		m=0;
	}
	int ha=0.5*(h*60+m);
	int ma=6*m;
	int angle=abs(ha-ma);
	angle=min(360-angle,angle);
	return angle;
}
int main()
{
	int i,j;
	scanf("%d%d",&i,&j);
	printf("%d",calcAngle(i,j));
	return 0;
}
