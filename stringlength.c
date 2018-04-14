#include<stdio.h>
int main()
{ char s[100];
  int i=0,d=0;
  scanf("%s",s);
  while(s!='\0')
  { if(s[i]!=" ")
      d++;
      i++;
      }
      printf("%d",d);
      return 0;
      }
  
