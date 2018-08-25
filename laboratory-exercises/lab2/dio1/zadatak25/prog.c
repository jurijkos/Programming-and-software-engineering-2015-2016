#include <stdio.h>
#include <string.h>


int main (void)
{
	int a=0,n=0,i=0;
	char oktalni[5]= "  ",znamenka1='0',znamenka2='0';
	scanf("%s",oktalni);
	n=strlen(oktalni);
	for(i=0;i<n;i++)
	{
		if(	oktalni[i] <'0' || oktalni [i] >'7')a=1;
		
		
	}
	znamenka1=oktalni[0];
	znamenka2=oktalni[n-1];
	if(a)printf("ucitani niz nije ispravno zadan: \n");
	else printf("prva znamenka ucitanog broja je %c\nzadnja znamenka je %c",znamenka1,znamenka2);
	return 0;
		
		
}
