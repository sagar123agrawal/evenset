#include<stdio.h>
int main()
{
 int n,i,c=0;
 scanf("%d",&n);
 for(i=2;i<n/2;i++)
 {
   if(n%i==0)
      {c=0;
       break;
       }
    else
     c=1;
  }
  if(c==1)
   printf("yes");
   else
   printf("no");
   }
