#include<stdio.h>
int main()
{
 int a,b,i,j;
 scanf("%d %d",&a,&b);
 for(i=a+1;i<b;i++)
 {
  {for(j=2;j<i/2;j++)
    if(i%j!=0)
      printf("%d",i);
  }
 }
 return 0;
 }
  
