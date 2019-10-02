/*Program To find Simple Interest*/
#include<stdio.h>
void main()
{
	int p,t,r,si;
	printf("enter principle :");
	scanf("%d",&p);
	printf("enter Time to find Simple Interest :");
	scanf("%d",&t);
	printf("enter Rate of Interest :");
	scanf("%d",&r);
	si=p*t*r/100;
	printf("Simple Interest is :%d",si);
}
