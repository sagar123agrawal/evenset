#include<stdio.h>

int main()
{ char s[100];
  int i=0,d=0;
  gets(s);
  while(s[i]!='\0')
  {
  	if(s[i]!=' ')
  	 d++;
  	 i++;
  }
  printf("%d",d);
  return 0;
}
  
