#include<stdio.h>
#include<math.h>
int main()
{ int n,m,i,t,j,o,rem,d,r;
scanf("%d %d",&n,&o);
for(j=n+1;j<o;j++)
{d=0;
 r=0;
t=j;
m=j;
while(t!=0)
 {d++;
  t/=10;
 }
for(i=1;i<=d;i++)
 {rem=m%10;
  r=r+pow(rem,d);
  m/=10;
 }
 if(j==r)
  printf("%d ",j);
}
return 0;
}
