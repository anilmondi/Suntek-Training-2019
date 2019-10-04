/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,temp,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);    
    }
   i=n;
   while(i>1)
    {
		 if(a[i]>a[i-1])
        {
            a[i]=a[i]+a[i-1];
            a[i-1]=a[i]-a[i-1];
            a[i]=a[i]-a[i-1];
            break;
        }
        i--;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}

