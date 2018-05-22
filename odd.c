#include<stdio.h>
#include<stdio.h>
int main()
{
	int n,rev=0,rem,r;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
	}
	while(rev!=0)
	{   r=rev%10;
		if(r%2!=0)
		printf("%d ",r);
		rev/=10;
	}
	return 0;
	
}
