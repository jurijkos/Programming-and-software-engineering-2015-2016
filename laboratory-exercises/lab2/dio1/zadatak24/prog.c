#include <stdio.h>
#include <string.h>


int main (void)
{
	int a=0,b=0,n=0,i=0;
	char oktalni[5]= "  ";
	scanf("%s",oktalni);
	n=strlen(oktalni);
	for(i=0;i<n;i++)
	{
		if(	oktalni[i] <'0' || oktalni [i] >'7')a=1;
		if(	oktalni[i] =='4')b++;
		
	}
	if(a)printf("ucitani niz nije ispravno zadan: \n");
	else printf("znamenka 4 se u zadanom nizu pojavljuje %d puta\n",b);
	return 0;
		
		
}
