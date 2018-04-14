#include<stdio.h>
#include<math.h>
int main()
{long int n,i,t,m,rem,d=0,r=0;
scanf("%ld",&n);
t=n;
m=n;
while(n!=0)
{d++;
n/=10;
}
for(i=1;i<=d;i++)
{rem=m%10;
 r=r+pow(rem,d);
 m/=10;
}
if(t==r)
printf("yes");
else
printf("no");
return 0;
}
