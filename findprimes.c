#include<stdio.h>
int prime(int n);
int main()
{
 int a,b,i,c;
 scanf("%d %d",&a,&b);
 for(i=a+1;i<b;i++)
 {
  c=prime(i);
  if(c==1)
    printf("%d ",i);
 }
 return 0;
}
int prime(int n)
{int i,c;
 if((n==2)||(n==3)||(n==5))
    return 1;
 else
 {
 for(i=2;i<n/2;i++)
 {
   if(n%i==0)
      {c=0;
       break;
       }
    else
     c=1;
  }
return c;
}
}
