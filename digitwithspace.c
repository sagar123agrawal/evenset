#include<stdio.h>
#include<math.h>

void main()
{
	int t,s,rem,rev=0,n;
	scanf("%d",&t);
	n=t;
	while(t!=0)
	{rem=t%10;
	 rev=(rev*10)+rem;
	 t/=10;
	}
    while(rev!=0)
	{s=rev%10;
	 printf("%d ",s);
	 rev/=10;
	}
	while(1)
	{rem=n%10;
	 if(rem==0)
	  {
	  printf("0 ");
	  n/=10;
      }
     else
      break;
	}
	
}
