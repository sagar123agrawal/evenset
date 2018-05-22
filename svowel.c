#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i=0,c=0;
	gets(s);
	while(s[i]!='\0')
	{
     if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
     { c=0;
       break;
	 }
	 else
	 {c=1;
	  i++;
	 }
	}
	if(c==0)
	 printf("yes");
	else
	printf("no");
	return 0;
}
