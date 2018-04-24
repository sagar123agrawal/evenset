#include<stdio.h>
void main()
{
	int n,d=0,rem;
	scanf("%d",&n);
	while(n!=0)
	{  rem=n%10;
		d=d+rem;
		n/=10;
	}
	printf("%d",d);
}
