#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[1000];
	int w,i=0;
	gets(s);
	while(s[i]!=0)
	{if(isdigit(s[i]))
	  w++;
	  i++;
	}
	printf("%d",w);
	return 0;
}
