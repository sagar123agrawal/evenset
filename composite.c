#include<stdio.h>
int main()
{
	int n,c=0,i;
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{ c=1;
		 break;
		}
	}
	if(c==1)
	printf("yes");
	else
	printf("no");
	return 0;
	
}
