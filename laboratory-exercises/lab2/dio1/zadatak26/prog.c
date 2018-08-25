#include <stdio.h>
#include <string.h>


int main (void)
{
	int a=0,n=0,i=0;
	char hex[5]= "  ",znamenka1=0,znamenka2='0';
	scanf("%s",hex);
	n=strlen(hex);
	
	for(i=0;i<n;i++)
	{
		if(	(hex[i] <'0' || hex[i] >'9') && (hex[i]<'A' || hex[i]>'F')  && (hex[i]<'a' || hex[i]>'f') )a=1;
		if((hex[i]>='A' && hex[i]<='F')&& (hex[i]-'A'+10)>znamenka1)
		{	
			znamenka1=hex[i]-'A'+10;
			znamenka2=hex[i];
		}
		if((hex[i]>='a' && hex[i]<='f')&& (hex[i]-'a'+10)>znamenka1)
		{	
			znamenka1=hex[i]-'a'+10;
			znamenka2=hex[i];
		}
		if((hex[i]>='0' && hex[i]<='9')&& (hex[i]-'0')>znamenka1)
		{	
			znamenka1=hex[i]-'0';
			znamenka2=hex[i];
		}
		printf("%c\n%d\n",hex[i],znamenka1);
		
	}
	if(a)printf("pogresno unesen niz");
	else printf("najveca znamenka je %c",znamenka2);

	return 0;
		
		
}
