#include<stdio.h>
#include<string.h>
int main()
{  char s[100];
   int l;
   gets(s);
   l=strlen(s);
   if(l%2==0)
    {
    	s[l/2]='*';
    	s[(l/2)-1]='*';
	}
   else
    s[l/2]='*';
    puts(s);
    return 0;
    
}
