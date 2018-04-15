#include<stdio.h>
int main()
{
	char s[1000];
	int w,i=0;
	gets(s);
	while(s[i]!=0)
	{if(s[i]==' ')
	  w++;
	  i++;
	}
	printf("%d",w+1);
	return 0;
}
