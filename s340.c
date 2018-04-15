#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	scanf("%d",&n);
	a=1;
	b=1;
	printf("%d %d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	return 0;
}
