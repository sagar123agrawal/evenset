#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j,l,c=0;
	gets(s);
	l=strlen(s);
	for(i=0,j=l-1;i<=l/2;i++,j--)
	{
		if(s[i]==s[j])
		  c=1;
		else
		{c=0;
		 break;
    	}
	}
	if(c==1)
	 printf("yes");
	else
	printf("no");
	return 0;
}
